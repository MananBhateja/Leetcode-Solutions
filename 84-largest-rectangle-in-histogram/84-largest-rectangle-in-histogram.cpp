class Solution {
public:
    void funcleft(vector<int>&left,vector<int>heights){
        
        
        stack<pair<int,int>>s;
        
        for(int i=0;i<heights.size();i++){
            
            if(s.size() == 0)
                left.push_back(-1);
            
            else if(s.size() > 0 and s.top().first < heights[i])
                left.push_back(s.top().second);
            
            else if(s.size() > 0 and s.top().first >= heights[i])
            {
                while(s.size() !=0 and s.top().first >= heights[i])
                    s.pop();
                
                if(s.size() == 0)
                    left.push_back(-1);
                else
                    left.push_back(s.top().second);
                
            }
            
            s.push({heights[i],i});
            
        }
    }
        
       void funcright(vector<int>&left,vector<int>heights){
        
        
        stack<pair<int,int>>s;
        
        for(int i=heights.size()-1;i>=0;i--){
            
            if(s.size() == 0)
                left.push_back(heights.size());
            
            else if(s.size() > 0 and s.top().first < heights[i])
                left.push_back(s.top().second);
            
            else if(s.size() > 0 and s.top().first >= heights[i])
            {
                while(s.size()  and s.top().first >= heights[i])
                    s.pop();
                
                if(s.size() == 0)
                    left.push_back(heights.size());
                else
                    left.push_back(s.top().second);
                
            }
            
            s.push({heights[i],i});
            
        }
        reverse(left.begin(),left.end());
    
       }
    
    int largestRectangleArea(vector<int>& heights) {
       
        vector<int>left;
        vector<int>right;
        
        funcleft(left,heights);
        
        funcright(right,heights);
        
        vector<int>width;
        
        for(int i=0;i<heights.size();i++){
            
            width.push_back(right[i]-left[i]-1);
            cout<<width[i]<<" ";
        }
        cout<<endl;
        int maxi=INT_MIN;
        for(int i=0;i<width.size();i++){
          maxi=  max(maxi,heights[i]*width[i]);
        }
        
       return maxi; 
    }
};
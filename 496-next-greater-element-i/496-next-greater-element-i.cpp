class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& arr) {
        
        
        stack<int>s;
        unordered_map<int,int>h;
        
        vector<int>ans;
        for(int i=arr.size()-1;i>=0;i--){
            
          if(s.size() == 0)
              // ans.push_back(-1);
              h[arr[i]]=-1;
            
          else if(s.size() > 0 and s.top() > arr[i]){
              
              // ans.push_back(s.top());
              h[arr[i]]=s.top();
          }  
          
          else if(s.size() > 0 and s.top() <= arr[i]){
              
              
              while(s.size() > 0 and s.top() <= arr[i]){
                  s.pop();
              }
              
              if(s.size() == 0)
                  h[arr[i]]=-1;
              else
                  h[arr[i]]=s.top();
              
          }
            s.push(arr[i]);
            
            
        }
        
        for(auto x:nums1){
            
            ans.push_back(h[x]);
        }
        
        return ans;
    }
};
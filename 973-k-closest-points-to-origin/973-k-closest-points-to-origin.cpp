class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
     
        
        priority_queue<int>h;
        
        for(int i=0;i<points.size();i++){
            
            int dis=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            
            if(h.size() < k or dis < h.top()){
                
                if(h.size()==k){
                    h.pop();
                }
                h.push(dis);
                
            }
            
        }
        
        int num=h.top();
        int i=0,j=points.size()-1;
        
        while(i <= j){
            
            int dis=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            
            if(dis <= num){
                i++;
            }
            else{
                swap(points[i],points[j]);
                j--;
            }
        }
        
        points.erase(points.begin()+k,points.end());
        
        return points;
        
    }
};
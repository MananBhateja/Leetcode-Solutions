class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        vector<vector<int>>ans;
        ans.reserve(grid.size()-2);
        
        
        for(int i=0;i<grid.size()-2;i++){
            
           vector<int>v;
            for(int j=0;j<grid[0].size()-2;j++){
                
                int mx=INT_MIN;
                for(int l=i;l<i+3;l++){
                    
                    for(int m=j;m<j+3;m++){
                        mx=max(mx,grid[l][m]);
                        // cout<<grid[l][m]<<" ";
                    }
                    // cout<<endl;
                }
                v.push_back(mx);
                // cout<<endl;
            }
           ans.push_back(v);
            // cout<<endl;
        }
      
        return ans;
    }
};
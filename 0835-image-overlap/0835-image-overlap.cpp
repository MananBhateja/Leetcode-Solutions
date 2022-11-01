class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        
        vector<pair<int,int>>i1,i2;
        
        for(int i=0;i<img1.size();i++){
            
            for(int j=0;j<img1[0].size();j++){
                
                if(img1[i][j] == 1)
                    i1.push_back({i,j});
                if(img2[i][j] == 1)
                    i2.push_back({i,j});
                
            }
        }
         int mx=0;
        map<pair<int,int>,int>h;
        
        for(auto x:i1){
            
            for(auto y :i2){
                
                int dir1=y.first-x.first;
                int dir2=y.second-x.second;
                
                h[{dir1,dir2}]++;
                 mx=max(mx,h[{dir1,dir2}]);
                
            }
            
        }
        // int mx=INT_MIN;
//         for(auto x: h){
//             mx=max(mx,x.second);
            
//         }
        
        return mx;
    }
};
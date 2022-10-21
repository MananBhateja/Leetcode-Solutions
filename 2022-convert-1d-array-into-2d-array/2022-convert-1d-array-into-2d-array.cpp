class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
     
        
        vector<vector<int>>ans;
         if(m*n != original.size()) return ans;
        
        int j=0;
        while(m--){
            vector<int>v;
            for(int i=0 ;i<=n-1;i++){
                v.push_back(original[j++]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
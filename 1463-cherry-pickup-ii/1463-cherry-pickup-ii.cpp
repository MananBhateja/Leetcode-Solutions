class Solution {
public:
    
int func(int i, int j1, int j2,vector<vector<int>>&grid,  vector<vector<vector<int>>>&dp){
    
    if(j1 < 0 or j1 >=grid[0].size() or j2 < 0 or j2 >=grid[0].size())
        return -1e8;
    
    if(i == grid.size()-1) {
        if(j1 == j2) return grid[i][j1];
        else
            return grid[i][j1]+grid[i][j2];
        
    }
    if(dp[i][j1][j2] != -1) return dp[i][j1][j2];
            
    int mx=INT_MIN;
    for(int d1=-1;d1<=1; d1++){
        
        for(int d2=-1;d2<=1;d2++){
            if(j1 == j2)
            mx=max(mx,grid[i][j1]+func(i+1,j1+d1,j2+d2,grid,dp));
            else
                mx=max(mx,grid[i][j1]+grid[i][j2] +func(i+1,j1+d1,j2+d2,grid,dp));
        }
    }
    
    return dp[i][j1][j2]=mx;
}

    int cherryPickup(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<vector<int>>>dp(r,vector<vector<int>>(c,vector<int>(c,-1)));
   // memset(dp,-1,sizeof(dp));
    return func(0,0,c-1,grid,dp);
    }
};
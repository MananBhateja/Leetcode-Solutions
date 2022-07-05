class Solution {
public:
    
    int func(int m, int n, vector<vector<int>>&grid,vector<vector<int>>&dp){
        
        if(n < 0 or n >= grid[0].size()) return INT_MAX;
        
        if(m == grid.size()-1) return grid[m][n];
        
        if(dp[m][n] != -1) return dp[m][n];
        
        int c=INT_MAX;
        for(int j=0;j<grid[0].size();j++){
            
            if(j != n)
                c=min(c,grid[m][n]+func(m+1,j,grid,dp));
        }
        
        return dp[m][n]=c;
        
    }
    
    
    int minFallingPathSum(vector<vector<int>>& grid) {
        
        int m=grid.size();
        int n=grid[0].size();
        
       vector<vector<int>>dp(m,vector<int>(n,-1));
        
        int mn=INT_MAX;
        for(int j=0;j<grid[0].size();j++){
            mn=min(mn,func(0,j,grid,dp));
        }
        return mn;
    }
};
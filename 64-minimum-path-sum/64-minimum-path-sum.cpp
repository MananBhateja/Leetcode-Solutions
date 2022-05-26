class Solution {
public:
    
    
    long func(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
        
        if(i == 0 and j==0) return dp[i][j]=grid[i][j];
        
        if(i < 0 or j < 0) return INT_MAX;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        long  up=grid[i][j] + func(i-1,j,grid,dp);
        
        long left=grid[i][j] + func(i,j-1,grid,dp);
        
        
        return dp[i][j] = min(left,up);
        
        
    }
    
    
    
    
    
    
    int minPathSum(vector<vector<int>>& grid) {
        
        int m=grid.size(),n=grid[0].size();
        
        vector<vector<int>>dp;
        
        dp.resize(m,vector<int>(n, -1));
        
        return func(m-1,n-1,grid,dp);
    }
};
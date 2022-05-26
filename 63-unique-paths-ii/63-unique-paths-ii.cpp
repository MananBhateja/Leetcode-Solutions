class Solution {
public:
    
    int func(int i, int j,vector<vector<int>>&obstacleGrid,vector<vector<int>>&dp ){
        
        if(i>=0 and j>=0 and obstacleGrid[i][j]==1) return dp[i][j]=0;
        
        if(i == 0 and j==0 ) return dp[i][j]=1;
        
        if(i < 0 or j < 0) return 0;
        
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
      int up=0;
        
        if(i>0) 
            up+=func(i-1,j,obstacleGrid,dp);
        
       int left=0;
        
        if(j>0) 
            left+=func(i,j-1,obstacleGrid,dp);
        
        return dp[i][j]=up+left;
        
        
        
    }
    
    
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        vector<vector<int>>dp;
        
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();   
        dp.resize(m, vector<int>(n, -1));
        
        return func(m-1,n-1,obstacleGrid,dp);
        
    }
};
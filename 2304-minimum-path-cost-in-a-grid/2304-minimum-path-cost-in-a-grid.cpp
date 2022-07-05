class Solution {
public:
    
    int func(int m, int n, vector<vector<int>>&grid,vector<vector<int>>&moveCost,vector<vector<int>>&dp){
        
       if(n >= grid[0].size() ) return INT_MAX;
        
        if(m == grid.size() -1 ) return dp[m][n]=grid[m][n];
        
        if(dp[m][n] != -1) return dp[m][n];
        
        int cost=INT_MAX;
        for(int j=0;j<grid[0].size();j++){
            
            int x=grid[m][n];
           // cout<<x<<endl;
            int c=moveCost[x][j] +func(m+1,j,grid,moveCost,dp)+x;
            
            cost=min(c,cost);
            
        }
        return dp[m][n]=cost;
        
    }
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        
        int m=grid.size();
        int n=grid[0].size();
        
        vector<vector<int>>dp(m,vector<int>(n,-1));
       
        int mn=INT_MAX;
        for(int j=0;j<n;j++)
         mn=min(mn,func(0,j,grid,moveCost,dp) );
          
            return mn;
        
    }
};
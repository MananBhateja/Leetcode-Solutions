class Solution {
public:
    
    int func(int i, int j,vector<vector<int>>& matrix,vector<vector<int>>& dp){
        
        if(j<0 or j>=matrix[0].size())
            return 1e9;
        
        if( i == 0) return dp[i][j]=matrix[i][j];
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int u=matrix[i][j]+func(i-1,j,matrix,dp);
        
        int ldg=matrix[i][j]+func(i-1,j-1,matrix,dp);
        
        int rdg=matrix[i][j]+func(i-1,j+1,matrix,dp);
        
        
        return dp[i][j]=min(u,min(ldg,rdg));
        
        
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
        
        int mini=1e9;
        for(int  j=0;j<m;j++){
            
            mini=min(mini,func(n-1,j,matrix,dp));
        }
        return mini;
    }
};
class Solution {
public:
    int func(int i, int j,vector<vector<int>>& triangle,vector<vector<int>>& dp){
    
        
        if(i == triangle.size())  return 0;//return dp[triangle.size()-1][j]=triangle[triangle.size()-1][j];
        
        if(dp[i][j] != -1) return dp[i][j];
        
//         int d=triangle[i][j]+func(i,j+1,triangle,dp);
        
//         int dg=triangle[i][j]+func(i+1,j+1,triangle,dp);
        
        return dp[i][j]=triangle[i][j]+min(func(i+1,j,triangle,dp),func(i+1,j+1,triangle,dp));
        
    }
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
     
       int n=triangle.size();
    vector<vector<int>> dp(n,vector<int> (n,-1));
        return func(0,0,triangle,dp);
        
        
    }
};
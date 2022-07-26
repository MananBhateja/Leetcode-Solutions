class Solution {
public:
    
    bool func(int i, int j,string &s, string &p,vector<vector<int>>&dp){
        
        if(i < 0 and j < 0) return true;
        
        if(j < 0 and i >=0) return false;
        
        if(i< 0 and j>=0){
            for(int k=j;k>=0;k--){
                if(p[k] != '*')
                    return false;
            }
            return true;
        }
        if(dp[i][j] != -1) return dp[i][j];
        
        if(s[i] == p[j] or p[j] == '?')
            return dp[i][j]=func(i-1,j-1,s,p,dp);
        
        if(p[j] == '*')
            return dp[i][j]= func(i-1,j,s,p,dp) or func(i,j-1,s,p,dp);
        
        return dp[i][j]=false;
        
    }
    
    
    bool isMatch(string s, string p) {
     
        int m=s.size();
        int n=p.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return func(m-1,n-1,s,p,dp);
        
    }
};
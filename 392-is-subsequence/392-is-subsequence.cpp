class Solution {
public:
    
    int func(int i ,int j, string &s, string &t ,vector<vector<int>>&dp ){
        
        if(i == 0 or j == 0 ) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        if(s[i-1] == t[j-1])
            return dp[i][j]= 1+ func(i-1,j-1,s,t,dp);
        else
        return dp[i][j]=max(func(i-1,j,s,t,dp),func(i,j-1,s,t,dp));
        
    }
    
    
    
    bool isSubsequence(string s, string t) {
        
        int m=s.size();
        int n=t.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        
        int ans=func(m,n,s,t,dp) ;
          
            if(ans == s.size())
             return true;
        return false;
    }
};
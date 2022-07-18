class Solution {
public:
     int func(int i, int j, string &s, string &t,vector<vector<int>>&dp){
        
        if(i == 0 or j == 0 ) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        
        if(s[i-1] == t[j-1])
            return dp[i][j]= 1 + func(i-1,j-1,s,t,dp);
        
        return dp[i][j] =max(func(i-1,j,s,t,dp),func(i,j-1,s,t,dp));
        
        
    }
    
    int minInsertions(string s) {
        
         string t=s;
        
        reverse(t.begin(),t.end());
        int n=t.length();
        
        // cout<<"len"<<t.length()<<endl;
        // cout<<"size"<<t.size()<<endl;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        
        return n-func(n,n,s,t,dp);
        
    }
};
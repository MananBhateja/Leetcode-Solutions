class Solution {
public:
     int func(int ind1,int ind2,string &s1,string &s2,vector<vector<int>>&dp){
        
        if(ind1 < 0 or ind2 < 0) return 0;
        
        if(dp[ind1][ind2] != -1) return dp[ind1][ind2];
        
        if(s1[ind1] == s2[ind2])
            return dp[ind1][ind2]=1+func(ind1-1,ind2-1,s1,s2,dp);
        
        return  dp[ind1][ind2] =max(func(ind1-1,ind2,s1,s2,dp),func(ind1,ind2-1,s1,s2,dp));
    }
    
    int minDistance(string text1, string text2) {
        
        
        int m=text1.size();
        int n=text2.size();
         vector<vector<int>>dp(m,vector<int>(n,-1));
        return (m+n-2*func(m-1,n-1,text1,text2,dp));
    }
};
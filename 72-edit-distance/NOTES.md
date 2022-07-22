class Solution {
public:
int func(string word1, string word2,int n, int m,int dp[][1000]){
if(n == 0) return dp[n][m]=m;
if(m == 0) return dp[n][m]=n;
if(dp[n][m] !=-1) return dp[n][m];
if(word1[n-1] == word2[m-1])
return func(word1,word2,n-1,m-1,dp);
else{
int op1=func(word1,word2,n-1,m-1,dp);
int op2=func(word1,word2,n,m-1,dp);
int op3=func(word1,word2,n-1,m,dp);
return dp[n][m]=min(op1,min(op2,op3))+1;
}
}
int minDistance(string word1, string word2) {
int dp[1000][1000];
memset(dp,-1,sizeof(dp));
int n=word1.length();
int m=word2.length();
return   func(word1,word2,n,m,dp);
}
};
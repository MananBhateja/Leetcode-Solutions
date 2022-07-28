class Solution {
public:
int mod=1e9+7;
int func(int ind, string &p,vector<int>&dp){
if(ind == p.length())
return 1;
if(dp[ind] != -1) return dp[ind];
int maxweight = (p[ind] == 7 or p[ind] == 9) ? 4 :3;
long long i=ind;
long long fre=1;
long long sum=0;
while(fre <= maxweight and p[ind] ==p[i]){
i++;
fre++;
sum+=func(i,p,dp)% mod;
}
return dp[ind]=sum % mod;
}
int countTexts(string p) {
vector<int>dp(p.length(),-1);
return func(0,p,dp) % mod;
}
};
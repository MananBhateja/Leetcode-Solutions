class Solution {
public:
int func(int ind,int target,vector<int>&nums,int sum,vector<vector<int>>&dp){
if(ind < 0) {
//             sum+=nums[ind];
//             if(sum == target) return 1;
//             else{
//                 sum-=2*nums[ind];
//                 if(sum == target) return 1;
//                 return 0;
//             }
if(sum == target) return 1;
return 0;
}
if(dp[ind][sum] != INT_MIN) return dp[ind][sum];
int plus=func(ind-1,target,nums,sum+nums[ind],dp);
int neg=func(ind-1,target,nums,sum-nums[ind],dp);
return dp[ind][sum]= plus+neg;
}
int findTargetSumWays(vector<int>& nums, int target) {
int n=nums.size();
int sum=0;
vector<vector<int>>dp(n,vector<int>(1000+1,INT_MIN));
return func(n-1,target,nums,sum,dp);
}
};
class Solution {
public:        // vector<vector<int>>&dp
bool func(int ind, int target, vector<int>&nums,vector<vector<int>>&dp){
if(ind == 0) return nums[0] == target;
if(target == 0) return true;
if(dp[ind][target]!=-1)
return dp[ind][target];
bool take =false;
if(target >= nums[ind])
take=func(ind-1,target-nums[ind],nums,dp);
bool nottake=func(ind-1,target,nums,dp);
return dp[ind][target]=take or nottake;
}
bool canPartition(vector<int>& nums) {
int totsum=0;
for(auto x:nums)
totsum+=x;
if(totsum % 2) return false;
int target=totsum/2;
int n=nums.size();
vector<vector<int>>dp(n,vector<int>(target+1,-1));
return func(n-1,target,nums,dp);
}
};
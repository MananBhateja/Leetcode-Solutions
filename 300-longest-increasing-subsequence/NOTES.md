class Solution {
public:
int lengthOfLIS(vector<int>& nums) {
int dp[10000];
for(int i=0;i<10000;i++){
dp[i]=1;
}
for(int i=1;i<nums.size();i++){
for(int j=0;j<i;j++){
if(nums[i] > nums[j]){
dp[i]=max(dp[i],dp[j]+1);
}
}
}
int ans=1;
for(int j=0;j<nums.size();j++){
ans=max(ans,dp[j]);
}
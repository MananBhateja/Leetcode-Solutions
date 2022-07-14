class Solution {
public:
    
    int func(int ind, int tar,vector<int>&arr,vector<vector<int>>&dp){
        
//         if(ind == 0) {
//            if(tar == 0 and nums[0] ==0) return 2;
//         if(tar == 0 or tar == nums[0]) return 1;
//         return 0;
//         }
        
//         if(dp[ind][tar] != -1) return dp[ind][tar];
        
        
//     int nottake= func(ind-1,tar,nums,dp);
//         int take=0;
        
//         if(tar >= nums[ind])
//             take=func(ind-1,tar-nums[ind],nums,dp);
        
//         return dp[ind][tar]=take+nottake;
    
        if(ind == 0)
    {
        if(tar == 0 and arr[0] ==0) return 2;
        if(tar == 0 or tar == arr[0]) return 1;
        return 0;
    }
    if(dp[ind][tar] != -1) return dp[ind][tar];
    
    int notpick=func(ind-1,tar,arr,dp);
    
    int pick=0;
    if(tar >= arr[ind])
        pick=func(ind-1,tar-arr[ind],arr,dp);
    
    return dp[ind][tar]=(pick + notpick);
    }
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        
        
        if(n ==1) {
        if( nums[0] == target)
            return 1;
        }
        int sum=0;
        for(auto x:nums)
            sum+=x;
        int tar=(sum-target)/2;
        //cout<<tar<<endl;
        vector<vector<int>>dp(n,vector<int>(1000+1,-1));
        if((sum - target) >= 0 and (sum-target)%2 == 0)
            return func(n-1,(sum-target)/2,nums,dp);
        return 0;
    }
};
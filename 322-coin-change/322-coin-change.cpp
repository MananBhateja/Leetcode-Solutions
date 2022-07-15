class Solution {
public:
    
    int func(int ind,int target,vector<int>&nums,vector<vector<int>>&dp){
        
        if(ind == 0){
            
            if(target %nums[0] == 0)
                return target/nums[0];
            return 1e9;
        }
        
        if(dp[ind][target] != -1)
            return dp[ind][target];
        
        int nottake=0+func(ind-1,target,nums,dp);
        
        int take=1e9;
        
        if(target >= nums[ind])
            take=1+func(ind,target-nums[ind],nums,dp);
      
        return dp[ind][target]=min(take,nottake);
    }
    
    
    int coinChange(vector<int>& nums, int amount) {
        
        
        int n=nums.size();
        
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=func(n-1,amount,nums,dp);
        
        if(ans >= 1e9)
            return -1;
        return ans;
    }
};
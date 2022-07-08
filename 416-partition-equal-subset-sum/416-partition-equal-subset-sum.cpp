class Solution {
public:
   bool func(int n,int tar,vector<int>&arr,vector<vector<int>>&dp){
    
    if(tar == 0) return true;
    
    if(n == 0) return arr[0] == tar;
    
    if(dp[n][tar] != -1 ) return dp[n][tar];
    
    bool notpick =func(n-1,tar,arr,dp);
    bool pick =false;
    
    if(tar >= arr[n])
        pick=func(n-1,tar-arr[n],arr,dp);
    
    return dp[n][tar]=notpick or pick;
    
}

    
    
    bool canPartition(vector<int>& nums) {
        
        int sum=0;
        int n=nums.size();
        //vector<vector<int>>dp(n,vector<int>( (sum/2)+1,-1 ));
        
        for(auto x:nums)
            sum+=x;
       int target=sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1 ));
        
        if(sum %2 == 1)
            return false;
        else
            return func(nums.size()-1,target,nums,dp);
        
    }
};
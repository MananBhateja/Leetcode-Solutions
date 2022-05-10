class Solution {
public:
    
    int f(int n,vector<int>nums,vector<int>&dp){
        
        if(n == 0) return dp[n]=nums[0];
        
        if(n < 0) return 0;
        
        
        if(dp[n]!=-1) return dp[n];
        
        int pick=nums[n]+f(n-2,nums,dp);
        
        int notpick=0+f(n-1,nums,dp);
        
        return dp[n]=max(pick,notpick);
        
        
    }
    int r(vector<int>nums){
        
         int n=nums.size();
        vector<int>dp(n,-1);
        
        return f(n-1,nums,dp);
        
    }
    
    
    int rob(vector<int> nums) {
        if(nums.size() ==1) return nums[0];
        
        vector<int>temp1,temp2;
        
        for(int i=0;i<nums.size();i++){
            
            if(i!=0) temp1.push_back(nums[i]);
            
            if(i!=nums.size()-1) temp2.push_back(nums[i]);
        }
        
        
       return  max( r(temp1),r(temp2) );
        
        
    }
    
    
    
};
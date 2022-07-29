class Solution {
public:
    
    
    
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        
        // return func(0,-1+1,nums,dp);
        for(int ind=n-1;ind >= 0;ind-- ){
            
            
            for(int last=ind-1;last>=-1;last--){
                
                int nottake=dp[ind+1][last+1];
                
                int take=0;
                
                if(last == -1 or nums[ind] > nums[last])
                    take=1+dp[ind+1][ind+1];
                
            
            dp[ind][last+1]=max(take,nottake);
            }
        }
        return dp[0][-1+1];
    }
};
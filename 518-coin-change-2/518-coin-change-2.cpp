class Solution {
public:
    
    int func(int ind,int target,vector<int>&coins,vector<vector<int>>&dp){
        
        if(ind == 0){
            
            if(target % coins[ind] == 0 or target ==0 ) return 1;
        
            return 0;
            
        }
        
        if(dp[ind][target] != -1) return dp[ind][target];
        
        int nottake=func(ind-1,target,coins,dp);
        int take=0;
        
        if(target >= coins[ind])
            take =func(ind,target-coins[ind],coins,dp);
        
        return dp[ind][target] =take+nottake;
        
    }
    
    int change(int amount, vector<int>& coins) {
        
        int n=coins.size();
       
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return func(n-1,amount,coins,dp);
        
    }
};
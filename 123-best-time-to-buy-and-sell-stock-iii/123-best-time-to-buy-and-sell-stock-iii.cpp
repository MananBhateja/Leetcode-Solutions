class Solution {
public:
     int func(int ind, int buy,int cap,vector<int>&prices,vector<vector<vector<int>>>&dp){
        if(cap == 0)
            return 0;        
        if(ind == prices.size())
            return 0;
        
        if(dp[ind][buy][cap] != -1) return dp[ind][buy][cap];
        
        int profit =0;
        if(buy){
            
         profit =max(-prices[ind]+func(ind+1,0,cap,prices,dp) ,0+func(ind+1,1,cap,prices,dp));
        }
        else
            profit=max(prices[ind]+func(ind+1,1,cap-1,prices,dp),0+func(ind+1,0,cap,prices,dp));
        
        return dp[ind][buy][cap]=profit;
        
    }
    
    int maxProfit(vector<int>& prices) {
        
        vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>(3,-1)));
        
        return func(0,1,2,prices,dp);
    }
};
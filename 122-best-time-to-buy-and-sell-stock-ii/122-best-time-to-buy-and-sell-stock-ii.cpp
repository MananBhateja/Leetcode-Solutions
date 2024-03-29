class Solution {
public:
    
    int func(int ind, int buy,vector<int>&prices,vector<vector<int>>&dp){
        
        
        if(ind == prices.size())
            return 0;
        
        if(dp[ind][buy] != -1) return dp[ind][buy];
        
        int profit =0;
        if(buy){
            
         profit =max(-prices[ind]+func(ind+1,0,prices,dp) ,0+func(ind+1,1,prices,dp));
        }
        else
            profit=max(prices[ind]+func(ind+1,1,prices,dp),0+func(ind+1,0,prices,dp));
        
        return dp[ind][buy]=profit;
        
    }
    
    
    int maxProfit(vector<int>& prices) {
        
        vector<vector<int>>dp(prices.size()+1,vector<int>(2,0));
        //vector<int>dp(prices.size(),-1);
        //return func(0,1,prices,dp);
        
        int n=prices.size();
        dp[n][0]=dp[n][1]=0;
        
        for(int ind=n-1;ind>=0;ind--){
            
            for(int buy=1;buy>=0;buy-- ){
                
                int profit=0;
                if(buy){
                    
                    profit=max(-prices[ind]+dp[ind+1][0],dp[ind+1][1]);
                }
                else{
                    
                    profit=max(prices[ind]+dp[ind+1][1],dp[ind+1][0]);
                }
                dp[ind][buy]=profit;
            }
            
        }
        
        return dp[0][1];
    }
};
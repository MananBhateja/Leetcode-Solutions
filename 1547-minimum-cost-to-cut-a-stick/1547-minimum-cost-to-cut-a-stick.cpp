class Solution {
public:
    int func(int i,int j ,vector<int>&cuts,vector<vector<int>>&dp){
        
       // if(i == cuts.size()) return INT_MAX;
        
        //if(j < 0) return INT_MAX;
        
        if(i > j) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int mini =INT_MAX;
        for(int k=i;k<=j;k++){
            
           int cost = cuts[j+1]- cuts[i-1]+ func(i,k-1,cuts,dp) +func(k+1,j,cuts,dp);
        
            mini =min(mini,cost);
            
        }
        return dp[i][j] =mini;
    }
    
    
    int minCost(int n, vector<int>& cuts) {
    
        int c=cuts.size();
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        
        sort(cuts.begin(),cuts.end());
        
        
        vector<vector<int>>dp(c+2,vector<int>(c+2,0));
        
        for(int i=c;i>=1;i--){
            
            for(int j=1;j<=c;j++){
                
                if(i > j) continue;
                 int mini =1e7;
        for(int k=i;k<=j;k++){
            
           int cost = cuts[j+1]- cuts[i-1]+ dp[i][k-1] + dp[k+1][j];
        
            mini =min(mini,cost);
            
        }
         dp[i][j] =mini;
            }
        }
        return dp[1][c];
       // return func(1,cuts.size()-2,cuts,dp);
    }
};
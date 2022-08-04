class Solution {
public:
    
    
    int func(int i,vector<int>&arr, int k,vector<int>&dp){
        
        if(i == arr.size()) return 0;
        
        if(dp[i] != -1) return dp[i];
    
        int j=i;
        int ls=INT_MIN;
        int mx=arr[j];
        int n=arr.size();
        int len=0;
        while(j < min(i+k,n) ){
            
            mx=max(mx,arr[j]);
           len++;
            
           int s=mx*len+func(j+1,arr,k,dp);
           
           ls=max(ls,s); 
            j++;
        }
     
        return dp[i]=ls;
    }
    
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        
        vector<int>dp(arr.size(),-1);
        return func(0,arr,k,dp);
    }
};
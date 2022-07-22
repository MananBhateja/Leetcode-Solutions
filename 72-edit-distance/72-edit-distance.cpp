class Solution {
public:
    int minDistance(string s, string t) {
        
        if(s.size() == 0) return t.size();
        
        if(t.size() == 0) return s.size();
        
        int m=s.size();
        int n=t.size();
        
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        
        
        for(int i=0;i<=m;i++)
            dp[i][0]=i;
        
        for(int j=0;j<=n;j++)
            dp[0][j]=j;
        
        
        for(int i=1;i<=m;i++){
            
            for(int j=1;j<=n;j++){
                
                if(s[i-1] == t[j-1]) 
                    dp[i][j]= 0 +dp[i-1][j-1];
                else
                {
                    int op1=1+dp[i][j-1]; // insert
                    
                    int op2=1+dp[i-1][j]; // delete
                    
                    int op3 =1+dp[i-1][j-1];
                    
                    dp[i][j] = min(op1,min(op2,op3));
                }
                
            }
        }
        
        for(int i=0;i<=m;i++){
            
            for(int j=0;j<=n;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        
        
      return dp[m][n];  
    }
    
};
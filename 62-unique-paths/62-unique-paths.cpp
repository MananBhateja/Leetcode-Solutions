class Solution {
public:
    
    int bottomup(int m, int n){
        
         int dp[100][100]={0};
        
        for(int i=0;i<m;i++){
            
            
            for(int j=0;j<n;j++){
                
                
                if(i == 0 or j == 0)
                    dp[i][j]=1;
                
                else
                {
                    int ans=0;
                    
                    //////if(i-1 >= 0)
                    ans+=dp[i-1][j];
                   
                    
                  // if(j-1 >= 0)
                    ans+=dp[i][j-1];
                  
                    cout<<ans<<endl;
                    dp[i][j]=ans;
                }
            }
        }
        for(int l=0;l<m;l++){
            
            for(int k=0;k<n;k++){
                cout<<dp[l][k]<<" ";
            }
            cout<<endl;
        }
        return dp[m-1][n-1];
    }
    
    
    int uniquePaths(int m, int n) {
        
        
        return bottomup(m,n);
    }
};
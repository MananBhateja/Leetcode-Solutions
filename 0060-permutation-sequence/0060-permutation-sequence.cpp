class Solution {
public:
    
//    int fact(int n , vector<int>&dp){
        
//         if( n == 1 or n==0 )
//             return dp[n]= 1;
        
//         if(dp[n] != -1) 
//             return dp[n];
        
        
//         return  dp[n]=n*fact(n-1);
//     }
    
    
    
    string getPermutation(int N, int K) {
         int n = N-1, k = K-1, nt, kt;
    vector<int>fact(N);
        
        fact[0]=1;
        int sum=1;
        for(int i=1;i<N;i++)
        {
            sum*=i;
            fact[i]=sum;
        }
        
        vector<int>v(N);
        for(int i=0;i<N;i++)
            v[i]=i+1;
        
       
        
        for(auto x: fact)
            cout<<"x "<<x<<" ";
        cout<<endl;
        
        
        for(auto x: v)
            cout<<"x "<<x<<" ";
        cout<<endl;
        
        
        string ans="";
        while(n >=0){
            
            int ind = k/fact[n];
        
            ans+=to_string(v[ind]);
            v.erase(v.begin()+ind);
           kt= k%fact[n];
           
            n--;
             k=kt;
        }
        
        return ans;
        
    }
};
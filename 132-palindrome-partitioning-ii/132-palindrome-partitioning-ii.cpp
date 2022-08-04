class Solution {
public:
    
    bool ispallindrome(string &temp){
        
        int i=0,j=temp.size()-1;
    
        while(i <= j){
            
            if(temp[i] != temp[j])
                return false;
            i++;
            
            j--;
            
            
        }
        return true;
        
    }
    
    
    int func(int i,string &s,vector<int>&dp){
        
        if(i == s.size()) return 0;
        
        if(dp[i] != -1) return dp[i];
        
         string temp="";
        int mincost=1e7;
        for(int j=i;j<s.size();j++){
            
            temp+=s[j];
           
            if(ispallindrome(temp))
            {  int cost=1+func(j+1,s,dp);
             //cout<<"cost"<<cost<<endl;
               // cout<<"hello"<<endl;
              mincost=min(cost,mincost);
            }
          
            
        }
        return dp[i]=mincost;
        
    }
    
    
    int minCut(string s) {
        vector<int>dp(s.size() ,-1);
        return func(0,s,dp)-1;
        
    }
};
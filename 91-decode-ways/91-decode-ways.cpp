class Solution {
public:
    int func(int ind, unordered_map<int,char>&ic,string &s,vector<int>&dp){
        
//         if(ind >= s.length()) return 1;
        
//         int opt1=0;
//         if(s[ind] != '0' )
//             opt1=func(ind+1,ci,ic,s);
//         int opt2=0;
//         if(s[ind] != '0')
//             opt2=func(ind+2,ci,ic,s);
        
//         return opt1+opt2;
        
        if(ind == s.length())
         return 1;
        
        if(dp[ind] != -1) return dp[ind];
        int op1=0;
        string ch="";
        ch+=s[ind];
        if(ic.count(stoi(ch)) )  {
            op1=func(ind+1,ic,s,dp);
        }
        int op2=0;
      if(ind+1 < s.length() and s[ind] != '0') { ch+=s[ind+1];
                            
        if(ic.count(stoi(ch)) ){
            op2=func(ind+2,ic,s,dp);
        }
        
     }
        return dp[ind] =op1+op2;
    }
    
    
    int numDecodings(string s) {
        
        unordered_map<char,int>ci;
        
        unordered_map<int,char>ic;
        
        int cnt=1;
        for(char ch='A';ch<='Z';ch++){
            
            ci[ch]=cnt;
            ic[cnt]=ch;
            cnt++;
            
        }
        vector<int>dp(s.length(),-1);
        return func(0,ic,s,dp);
        
    }
};
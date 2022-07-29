class Solution {
public:
     bool checkpossible(string &s1,string &s2){
        
        
        if(s1.size() != s2.size()+1)
            return false;
        int first=0;
        int second=0;
        
        while(first < s1.size()){
            
            if(s1[first] == s2[second]){
                first++;
                second++;
            }
            else
            {
                first++;
            }
        }
        
        if(first == s1.size() and second == s2.size()) return true;
        
        return false;
    }
    
  static bool comp(string &a, string &b){
        
        return a.length() < b.length();
    }
    int longestStrChain(vector<string>& nums) {
        
        
         int n=nums.size();   
    sort(nums.begin(),nums.end(),comp);
        
        for(auto x:nums) cout<<x<<" ";
        cout<<endl;
    
    vector<int>dp(n,1);
        int maxi=1;
        
        int lastind=0;
        for(int i=0;i<n;i++){
           
           
            for(int prev =0;prev < i;prev++){
                
               
                if(checkpossible(nums[i],nums[prev])){
                    
                    if(dp[i] < 1+dp[prev]){
                        dp[i]=1+dp[prev];
                        
                    }
                }
            }
            
            if(dp[i] > maxi){
                maxi=dp[i];
               
            }
        }
        
        
       return maxi; 
//      vector<int>temp;
//         temp.push_back(nums[lastind]);
        
//         while(hash[lastind] != lastind ){
            
//             lastind=hash[lastind];
//             temp.push_back(nums[lastind]);
//         }
        
//         return temp;
        
    }
};
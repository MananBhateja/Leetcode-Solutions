class Solution {
public:
    
   
    
    
    bool func(int ind ,int last ,vector<int>&stones,vector<vector<int>>&dp){
        if(ind >= stones.size())
            return false;
        
        if(ind == stones.size()-1)
            return true;
        
        if(dp[ind][last] != -1) return dp[ind][last];
        
//         if(ind == 0){
            
//             if(stones[ind+1] - stones[ind] > 1)
//                 return false;
        
//         }
        
        bool op1= false;
        
        //cout<<"ind"<<ind<<endl;
        if(last-1 > 0){
        int i=lower_bound(stones.begin()+ind +1,stones.end(),stones[ind]+last-1) - stones.begin();
        //cout<<"i"<<i<<endl;
        if(i < stones.size() and stones[i] == stones[ind]+last-1)
            op1=func(i,last-1,stones,dp);
            }
        
        bool op2= false;
        if(last > 0){
       int i=lower_bound(stones.begin()+ind +1,stones.end(),stones[ind]+last) - stones.begin();
            
        if(i < stones.size() and stones[i] == stones[ind]+last )
            op2=func(i,last,stones,dp);
            }
        
        bool op3 =false;
        if(last + 1 > 0){
       int i=lower_bound(stones.begin()+ind +1,stones.end(),stones[ind]+last+1) - stones.begin();
        if(i < stones.size() and stones[i] == stones[ind]+last+1)
            op3=func(i,last+1,stones,dp);
        }
       // if(op1 == false or op2 ==false or op3 == false)
            //cout<<"false"<<" "<<"ind"<<ind <<" "<<op1<<" "<<op2<<" "<<op3<<endl;
        
        return dp[ind][last]=op1 or op2 or op3 ;
        
    }
    
    
    
    bool canCross(vector<int>& stones) {
        vector<vector<int>>dp(stones.size()+1,vector<int>(2*stones.size()+1,-1));
        
        return func(0,0,stones,dp);
    }
};
class Solution {
public:
    
    bool check(vector<int>weights,int days, int mx){
        
        
        int cnt=1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(sum  > mx)
            
            {
                cnt++;
                sum=weights[i];
            }
            
        }
        
        if(cnt <= days)
            return true;
        return false;
        
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
       
        int low=INT_MIN;
      
           
      
        int sum=0;
        for(auto x:weights)
{            sum+=x;
         low=max(x,low);}
        
   int ans=-1;
        while(low <= sum){
            
            int mid=low+(sum-low)/2;
            bool valid = check(weights,days,mid);
            
            if(valid)
            {
                ans=mid;
                sum=mid-1;
            }
            
            else
                low=mid+1;
            
        }
        
        
        return ans;
    }
};
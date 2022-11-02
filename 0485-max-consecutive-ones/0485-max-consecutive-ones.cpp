class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     
        int cnt=0;
        int ans=INT_MIN;
        for(auto x:nums){
            
            if(x ==1 )
                cnt++;
            else
            {
                ans=max(ans,cnt);
                cnt=0;
            }
        }
        
        if(ans == INT_MIN)
            return cnt;
        return max(ans,cnt);
    }
};
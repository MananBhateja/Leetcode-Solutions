class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        
        
        int k=0;
        
        for(auto x: nums)
            k=(k+x)%p;
        
        if(k == 0) return 0;
        
        unordered_map<int,int>h;
        
        h[0]=-1;
        
        int other =0;
        int n= nums.size();
        int ans=n;
        for(int i=0;i<nums.size();i++){
            
            other =(other+ nums[i])%p;
            
            int temp = (other-k)%p;
            
            if(temp < 0)
                temp+=p;
            
            if(h.count(temp))
                ans=min(ans,i-h[temp]);
            h[other]=i;
            
            
        }
        
        return ans==n ? -1 : ans;
        
        
    }
};
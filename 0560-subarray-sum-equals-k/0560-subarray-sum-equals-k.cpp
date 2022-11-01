class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     
        unordered_map<int,int>h;
        
         int cnt=0;
        long sum=0;
        
        for(auto x: nums){
            
            sum+=x;
            
            if(sum == k)
                cnt++;
            
            if(h.count(sum-k))
                cnt+=h[sum-k];
            
            h[sum]++;
        }
        
       return cnt; 
    }
};
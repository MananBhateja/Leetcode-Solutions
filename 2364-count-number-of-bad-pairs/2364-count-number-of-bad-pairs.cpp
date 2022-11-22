class Solution {
public:
    
    
    long long valid(vector<int>nums){
        
        unordered_map<int,int>h;
        
        for(int i=0;i<nums.size();i++){
            
            nums[i]-=i;
        }
        
        long long cnt=0;
        
        for(auto x:nums){
            
            if(h.count(x)){
                cnt+=h[x];
            }
            
                h[x]++;
        }
        
        return cnt;
        
    }
    
    
    long long total(vector<int>nums){
        
        long long n = nums.size();
        
        return n*(n-1)/2;
    }
    
    
    long long countBadPairs(vector<int>& nums) {
        
        
       return  total(nums) - valid(nums);
    }
};
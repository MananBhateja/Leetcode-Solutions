class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        
        unordered_map<int,int>h;
        
        int res=0;
        
        for(auto x: nums)
          {  res+=h[x-k] + h[x+k]; 
            h[x]++;}
        
       
        return res;
        
    }
};
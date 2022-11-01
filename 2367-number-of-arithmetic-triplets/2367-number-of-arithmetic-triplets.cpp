class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
//         int cnt=0;
//         for(int i=0;i<nums.size();i++){
            
            
//             for(int j=i+1;j<nums.size();j++){
                
                
//                 for(int k=j+1;k<nums.size();k++){
                    
                    
//                     if(nums[j]-nums[i] == diff and nums[k]-nums[j] == diff)
//                         cnt++;
//                 }
//             }
//         }
//         return cnt;
        
        int cnt=0;
        unordered_map<int,int>h;
        
        for(auto x:nums)
            h[x]++;
        
        
        for(auto x : nums){
            
            if(h.count(x+diff) and h.count(x+2*diff))
                cnt++;
        }
        return cnt;
    }
};
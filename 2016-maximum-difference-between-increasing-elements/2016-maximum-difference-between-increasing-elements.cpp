class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        vector<int>arr;
        
        arr.push_back(nums[0]);
        
        for(int i=1;i<nums.size();i++){
            
            arr.push_back(min(arr[i-1],nums[i]));
        }
        
        int mx=-1;
        for(int i=0;i<nums.size();i++){
          mx=  max(mx,abs(nums[i]-arr[i]));
        }
        
        if(mx == 0)
            return -1;
        return mx;
    }
};
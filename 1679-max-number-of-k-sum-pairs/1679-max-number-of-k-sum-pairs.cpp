class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int s=0,end=nums.size()-1;
        
        int cnt=0;
        sort(nums.begin(),nums.end());
        
        while(s < end){
            
            if(nums[s] +nums[end] == k){
                cnt++;
                s++;
                end--;
            }
            else if(nums[s] + nums[end] < k)
                s++;
            
            else
                end--;
            
        }
        
        return cnt;
    }
};
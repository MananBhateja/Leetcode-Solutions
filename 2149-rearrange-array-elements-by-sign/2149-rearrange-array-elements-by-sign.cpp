class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
    int pos=0,neg=0;
        
        vector<int>ans;
        while(nums[pos] < 0)
            pos++;
        
        while(nums[neg] > 0)
            neg++;
        
        while(pos < nums.size() or neg < nums.size()){
            
            ans.push_back(nums[pos]);
            ans.push_back(nums[neg]);
                pos++;
                neg++;
            while(pos < nums.size() and nums[pos] < 0)
            pos++;
        
        while(neg < nums.size() and nums[neg] > 0)
            neg++;
            
            
        }
        
//         cout<<nums[pos]<<endl;
        
//         cout<<nums[neg]<<endl;
        
        return ans;
        
    }
};
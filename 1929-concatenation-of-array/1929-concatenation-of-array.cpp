class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        ans.reserve(2*nums.size());
        for(int i=0;i<2*nums.size();i++){
            
            if(i>=nums.size()){
            ans.push_back(nums[i-n]);
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
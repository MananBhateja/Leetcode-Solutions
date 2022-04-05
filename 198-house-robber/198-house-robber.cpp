class Solution {
public:
    // tipa hua .....
    int rob(vector<int>& nums) {
        if (size(nums) <= 1) return size(nums) == 1 ? nums[0] : 0;
        nums[1] = max(nums[0], nums[1]);
        for (int i = 2; i < size(nums); ++i) {
            nums[i] = max(nums[i - 1], nums[i - 2] + nums[i]);
        }
        return nums.back();
    }
};
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        
        priority_queue<int>h(nums.begin(),nums.end());
        
        int a=h.top();
        h.pop();
        int b= h.top();
        h.pop();
        
        return (a-1)*(b-1);
    }
};
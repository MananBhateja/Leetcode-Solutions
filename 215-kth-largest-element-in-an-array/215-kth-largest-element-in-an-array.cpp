class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       
        priority_queue<int,vector<int>,greater<int>>h;
        
        int cnt=0;
        
        for(int i=0;i<nums.size();i++){
            
            
            if(cnt < k){
                h.push(nums[i]);
                cnt++;
            }
            else{
                
                if(h.top() < nums[i]){
                    h.pop();
                    h.push(nums[i]);
                }
            }
        }
        return h.top();
    }
};
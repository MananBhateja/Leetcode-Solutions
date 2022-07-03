class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int>pos;
        vector<int>neg;
        
        vector<int>ans;
        int n = nums.size()/2;
        
        for(auto x: nums){
         if(x > 0)   pos.push_back(x);
         
         else  neg.push_back(x);
        }
        
        for(int i=0;i<n;i++){
            
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};
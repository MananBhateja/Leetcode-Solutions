class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        
        if(nums.size() == 2)
            return 1;
        
        sort(nums.begin(),nums.end());
        
        set<float>st;
        while(nums.size()){
            
            int s=nums[0];
                nums.erase(nums.begin()+0);
            
            int e=nums[nums.size()-1];
                nums.erase(nums.begin()+nums.size()-1);
            
            st.insert((s+e)/2.0);
            
        }
        
        return st.size();
        
    }
};
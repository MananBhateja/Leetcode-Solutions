class Solution {
public:
    
    void func(vector<int>&ans,vector<int>&temp){
        
        for(auto x:temp){
            ans.push_back(x);
        }
        
    }
    
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int>before;
        
        vector<int>same;
        
        vector<int>after;
        vector<int>ans;
        
        for(auto x:nums){
            
            if(x < pivot)
                before.push_back(x);
            else if(x == pivot)
                same.push_back(x);
            else 
                after.push_back(x);
        }
        
        func(ans,before);
        func(ans,same);
        func(ans,after);
        
        return ans;
    }
};
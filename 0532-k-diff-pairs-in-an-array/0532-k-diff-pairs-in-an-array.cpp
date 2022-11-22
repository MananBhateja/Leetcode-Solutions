class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        int i=0;
        int j=i+1;
        
        set<pair<int,int>>s;
        
        sort(nums.begin(),nums.end());
        
        int cnt=0;
        
        while(j < nums.size()){
            
            if(  abs(nums[j] - nums[i]) == k )
               { 
                if(i != j)
                s.insert({nums[j],nums[i]});
                j++;
                }
            else if(abs(nums[j] - nums[i]) < k )
                j++;
            else
                i++;
            
        }
        
        return s.size();
        
    }
};
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
      unordered_map<int,int>h;
        
        for(auto x:nums1)
            h[x]++;
        
        for(auto x: nums2){
            if(h.count(x))
                h[x]=INT_MAX;
        
        }
        vector<int>ans;
        for(auto x : h)
        {
            if(x.second == INT_MAX)
                ans.push_back(x.first);
        }
        return ans;
    }
};
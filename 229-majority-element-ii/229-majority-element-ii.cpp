class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        unordered_map<int,int>mp;
        
        vector<int>ans;
        for(auto x: nums){
            
            if(mp.count(x))
                mp[x]++;
            else
                mp[x]=1;
        }
        int x;
        for(auto node:mp){
            
            if(node.second > nums.size()/3)
            {  x=node.first;
             ans.push_back(x);
                
             
            }
            
        
        }
        
        return ans;
    }
};
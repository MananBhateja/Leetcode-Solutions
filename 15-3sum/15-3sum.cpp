class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>ans;
        set<vector<int>>s;
        
    sort(nums.begin(),nums.end());
        
        for(auto x : nums)
            cout<<x<<" ";
        cout<<endl;
        
        if(nums.size() < 3)
            return ans;
        if(nums[0] > 0)
            return ans;
        if(nums[0] == 0 and nums[nums.size()-1] == 0)
        {
            vector<int>v;
            v.push_back(0);
            v.push_back(0);
            v.push_back(0);
            ans.push_back(v);
            return ans;
            
            
        }
    for(int i=0;i<nums.size();i++){
        
        int left=i+1;
        int right=nums.size()-1;
       // int tar =-1*nums[i];
        
        int sum=0;
        while( left < right){
            sum=nums[i]+nums[left]+nums[right];
            
            if(sum == 0)
            {
                //cout<<" == "<<endl;
                vector<int>v;
                v.push_back(nums[i]);
                v.push_back(nums[left]);
                v.push_back(nums[right]);
                s.insert(v);
                //ans.push_back(v);
                
            int leftocc=nums[left];
                int rightocc =nums[right];
                while(left < right  and nums[left] == leftocc)
                left++;
                while(left < right and nums[right] == rightocc)
                right--;
            }
            else if(sum < 0)
            {
                //cout<<"<"<<endl;
                left++;
            }
            else 
            {
                //cout<<"else"<<endl;
                 right--;
            }
        }
    }
       
        for(auto x: s)
            ans.push_back(x);
        
        return ans;
        
    }
};
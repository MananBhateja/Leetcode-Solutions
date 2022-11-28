class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        vector<vector<int>> v;
        priority_queue<pair<int,pair<int,int>>>pq;
        
        if(nums1.size() == 0 or nums2.size() == 0 or k == 0) return v;
        
        int cnt=0;
        for(int i=0;i<nums1.size();i++){
            
            for(int j=0;j<nums2.size();j++){
                
                if(cnt < k)
                {
                    pq.push({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
                    cnt++;
                }
                
                else if(pq.top().first > nums1[i]+nums2[j]){
                        
                        pq.pop();
                        pq.push({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
                    }
                else 
                    break;
                
            }
        }
        
        
        while(pq.size()){
            vector<int>a;
            a.push_back(pq.top().second.first);
            a.push_back(pq.top().second.second);   
            pq.pop();
            v.push_back(a);
        }
        
        return v;
    }
};
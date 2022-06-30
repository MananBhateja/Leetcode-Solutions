class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        vector<int>a;
        
        vector<int>ans;
        a.push_back(arr[0]);
        
        for(int i=1;i<arr.size();i++){
            a.push_back(a[i-1]^arr[i]);
        }
        
//         for(auto x:a)
//             cout<<x<<" ";
        
        // cout<<endl;
        
        for(int i=0;i<queries.size();i++)
        {
            
            int start=queries[i][0];
            int end=queries[i][1];
            
            if(start == 0)
                ans.push_back(a[end]);
            
            else{
                
                ans.push_back(a[start-1]^a[end]);
            }
            
        }
            return ans;
        
    }
};
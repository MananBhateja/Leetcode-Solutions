class Solution {
public:
    unordered_map<int,int>h;
    
//     static bool comp(int a, int b){
        
//         if(h[a] == h[b])
//             return a < b;
        
//         return h[a] < h[b];
//     }
    vector<int> frequencySort(vector<int>& nums) {
        
    for(auto x: nums)
        h[x]++;
        
        sort(nums.begin(),nums.end(),[&]( int a, int b){
            
        if(h[a] == h[b])
            return a > b;
        
        return h[a] < h[b];
        });
        return nums;
    }
};
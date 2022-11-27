
// class Solution {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) {
        
//         unordered_map<int,int>h;
//         vector<int>pre(nums.size());
        
//         for(auto x: nums)
//             h[x]++;
        
//         if(h.size() == 1)
//         {
//             if(nums[0] % k == 0)
//                 return (nums.size() * (nums.size() +1) )/2;
//             else
//                 return 0;
//         }
        
//         pre[0]=nums[0];
        
//         for(int i=1;i<nums.size();i++)
//             pre[i]=pre[i-1]+nums[i];
        
        
//         for(auto x:pre)
//             cout<<x<<" ";
//         cout<<endl;
        
        
//         int cnt=0;
//    for(int i=0;i<nums.size();i++){
       
//        for(int j=i;j<nums.size();j++){
           
//            if((pre[j]-pre[i]+nums[i]) % k == 0  )
//            {
//                cnt++;
//                // cout<<"i "<<i<<" j "<<j<<endl;
//            }
           
//        }
//    }
      
//         return cnt;
        
//     }
// };


class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        map<int,int>h;
        
        int sum=0;
        for(auto x: nums){
            
            sum+=(x%k + k)%k;
            h[sum % k]++;
            
        }
        
        int result =h[0];
        
        for(auto x:h)
            result+=(x.second*(x.second-1))/2;
        
        return result;
    }
};
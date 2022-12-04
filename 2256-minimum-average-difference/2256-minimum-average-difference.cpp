class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        vector<long long>pre(nums.size());
        
        pre[0]=nums[0];
        // unordered_map<int,int>h;
        
       // h[nums[0]]++;
        for(int i=1;i<nums.size();i++)
           { pre[i]=pre[i-1]+nums[i];
            // h[nums[i]]++;
        }
       // if(h.size() == 1 )
//            return 0;
//         for(auto x:nums)
//             cout<<x<<" ";
//         cout<<endl;
        
//         for(auto x:pre)
//             cout<<x<<" ";
//         cout<<endl;
        
        int ans=INT_MAX;
        int ind=-1;
        for(int i=0;i<nums.size();i++){
            
            long long left =pre[i];
            long long right =pre[nums.size()-1]-pre[i];
            
            left=left/(i+1);
        if(nums.size()-i-1 > 0)    right=right/(nums.size()-i-1);
            else right=0;
            
            if(ans > abs(left-right)){
                ans=abs(left-right);
                ind=i;
            }
            
        }
        
        return ind;
        
    }
};


//              THIS SOLUTION GIVES TLE 

// int minimumAverageDifference(vector<int>& nums) {
        
//         int ans=INT_MAX;
//         int ind=-1;
//         for(int i=0;i<nums.size();i++){
            
//             long long left=0;
//             for(int j=0;j<=i;j++){
//                 left+=nums[j];
//             }  
            
//            long long right=0;
//             for(int k=i+1;k<nums.size();k++){
//                 right+=nums[k];
//             }
//             // cout<<"before left "<<left<<endl;
//             //     cout<<" before right "<<right<<endl;
            
//             left=(left/(i+1));
//        if(nums.size()-i-1 > 0)     right=(right/(nums.size()-i-1));
//             else
//                 right=0;
            
// //             cout<<"after left "<<left<<endl;
// //                 cout<<"after right "<<right<<endl;
            
//             if(ans > abs(left -right)){
                
//                 ans=abs(left-right);
//                 ind=i;
// //                 cout<<"left "<<left<<endl;
// //                 cout<<"right "<<right<<endl;
                
// //                 cout<<"ans "<<ans<<endl;
                
// //                 cout<<"index "<<ind<<endl;
//             }
            
//         }
//         return ind;
//     }
// };
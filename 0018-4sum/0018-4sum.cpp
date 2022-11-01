class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
        
//         vector<vector<int>> res;
        
//         if(n==0) return res;
        
        
//         for(int i = 0 ; i<n;i++ ){
            
//             for(int j = i+1;j<n;j++){
                
//                  long long find = target-nums[j]-nums[i];  
                    
//                     int left = j+1;
//                     int right = n-1;
                
//                 while(left<right){
                    
//                     int sum = nums[left]+nums[right];
                    
//                     if(sum > find){
//                         right--;
//                     }else if(sum < find){
//                         left++;
//                     }else{
                        
//                         vector<int>quad(4,0);
//                         quad[0]=nums[i];
//                         quad[1]=nums[j];
//                         quad[2]=nums[left];
//                         quad[3]=nums[right];
//                         res.push_back(quad);         //  11222333444
                        
//                       while(left<right && nums[left] == quad[2] ) ++left;
                        
//                        while(left<right && nums[right] ==  quad[3] ) --right;
                        
//                     }
                    
                    
              
//                 }
                     
//                       while(j+1<n && nums[j+1] ==  nums[j]) j++;
                    
//             }
             
          
//                  while(i+1<n && nums[i+1] ==  nums[i]) i++;
               
            
//         }
        
        
//         return res;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        
        for(int i=0;i<nums.size();i++){
            
            for(int j=i+1;j<nums.size();j++){
                
//                 for(int k=j+1;k<nums.size();k++){
                    
//                     for(int l=k+1;l<nums.size();l++){
//                         vector<int>v;
//                         if(nums[i]+nums[j]+nums[k]+nums[l] == target){
//                             v.push_back(nums[i]);
//                             v.push_back(nums[j]);
//                             v.push_back(nums[k]);
//                             v.push_back(nums[l]);
//                             s.insert(v);
//                         }
//                     }
                   
//                 }
                
                int s=j+1,e=nums.size()-1;
                
                while(s <e){
                    vector<int>v;
                    long long a= nums[s] + nums[e];
                    long long t2=target-nums[j];
                    long long t=t2-nums[i];
                    if(a == t)
                    {
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[s]);
                        v.push_back(nums[e]);
                        st.insert(v);
                        s++;
                        e--;
                        
                    }
                    else if(a < t)
                        s++;
                    else
                        e--;
                    
                }
            }
        }
        
        for(auto x: st){
            ans.push_back(x);
        }
        
        return ans;
    }
};
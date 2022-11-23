class Solution {
public:
    int mod =1e9+7;
  long long rev(long long n){
        
      long long temp=n;
        
        long long re=0;
        while(temp){
           long long r=temp%10;
            re=re*10+r;
            temp/=10;
        }
        
        return re;
    }
    long long countNicePairs(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            
            
            nums[i]=(nums[i]-rev(nums[i]));
            
        }
        
       long long cnt=0;
        
        unordered_map<long long ,long long>h;
        for(auto x: nums){
            
            if(h.count(x))
                cnt+=h[x];
            h[x]++;
        }
        // cout<<endl;
        
        return cnt % mod;
    }
};

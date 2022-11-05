class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
       unsigned int shift =1,ans=0;
        
        for(int i=0;i<32;i++){
            
            int cnt=0;
            
            for(auto x:nums){
                
                if(x & shift )
                    cnt++;
            }
            
            if(cnt %3 !=0)
                ans+=shift;
            
            shift*=2;
            
        }
        return ans;
    }
};
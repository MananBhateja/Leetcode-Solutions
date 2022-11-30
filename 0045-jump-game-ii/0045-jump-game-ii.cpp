class Solution {
public:
    int jump(vector<int>& nums) {
        
        int l=0,r=0;
    
        int mx=INT_MIN,cnt=0;
        while(r < nums.size()-1){
            
            for(int i=l;i<=r;i++){
                
              mx=  max(nums[i]+i,mx);
            }
            cnt++;
            l=r+1;
            r=mx;
        }
    
        return cnt;
    }
};
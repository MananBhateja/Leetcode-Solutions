class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        if(nums.size() == 1) return true;
        
        int r=0;
        
        int i=0;
     
            while(i < nums.size()){
                
                if(r < i )
                {
                    cout<<i<<endl;
                      return false;
                }
                
                r=max(r,i+nums[i]);
                i++;
            }
        
        return true;
    }
};


// 3 2 1 0 4 l =0 r= 0
    
// 3 2 1 0 4 i =1 r= 4
    
    
// 3 2 1 0 4 i =2 r= 4
    
// 3 2 1 0 4 i =3 r= 4
    
    
    
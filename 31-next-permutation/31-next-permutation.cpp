class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        //next_permutation(nums.begin(),nums.end());

    int i,l;
        for( i=nums.size()-2;i>=0;i--){
            
            if(nums[i] < nums[i+1])
            {
                // indx1=i;
                break;
            }
            
        }
        
        if(i < 0) 
            reverse(nums.begin(),nums.end());
        else{
            
            for( l=nums.size()-1;l>i;l--){
                
               if( nums[l] > nums[i])
               {
                   // indx2=k;
                   break;
               }
            }
        
         
        swap(nums[i],nums[l]);
        
        reverse(nums.begin()+i+1,nums.end());
        
        }
    
    }
};
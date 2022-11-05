class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        // int r = 0;
        // for(int i = 0; i < 32; i++){
        //     int lsb = n & 1;
        //     int reverselab = lsb << (31-i);
        //     r = r | reverselab;
        //     n = n >> 1;
        // }
        // return r;\
        
        
       uint32_t res=0;
        for(int i=0;i<=31;i++){
            
            uint32_t mask= (1 << i);
            if(mask & n){
                
                res=res | (1 << (31-i));
            }
        }
        return res;
    
    }
};
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int r = 0;
        for(int i = 0; i < 32; i++){
            int lsb = n & 1;
            int reverselab = lsb << (31-i);
            r = r | reverselab;
            n = n >> 1;
        }
        return r;
    }
};
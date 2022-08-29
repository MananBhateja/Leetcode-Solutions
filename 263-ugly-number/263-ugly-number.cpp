class Solution {
public:
    bool isUgly(int n) {
        
        if(n <1) return false;
        
        vector<int>p={2,3,5};
        
        for(auto i:p){
            
            while(n % i == 0){
                n/=i;
            }
        }
        
        if(n == 1)
            return true;
        return false;
        
    }
};
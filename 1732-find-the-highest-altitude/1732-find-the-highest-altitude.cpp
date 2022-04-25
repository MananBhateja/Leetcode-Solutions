class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int m=0,csum=0;
        
        for(auto x :gain){
            
            csum+=x;
            m=max(csum,m);
        }
        return m;
    }
};
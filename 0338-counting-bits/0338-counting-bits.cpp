class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>v;
        v.push_back(0);
        
        for(unsigned int i=1;i<=n;i++){
            
            int cnt=0;
            int temp=i;
            while(temp > 0){
                
                temp=temp&(temp-1);
                cnt++;
            }
            v.push_back(cnt);
        }
        
        return v;
    }
};
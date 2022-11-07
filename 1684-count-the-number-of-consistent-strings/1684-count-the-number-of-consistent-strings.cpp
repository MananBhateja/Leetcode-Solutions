class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        unordered_map<int,int>h;
        for(auto x: allowed ){
            h[x]++;
        }
        
        int cnt=0;
        for(auto x: words){
            int flag2=0;
            for(auto y :x){
                
                int flag=0;
                if(!h.count(y))
                {
                    flag++;
                    flag2++;
                    break;
                }
              if(flag){
                  break;
              }
                
                
            }
            if(flag2 == 0){
                 cnt++;
            }
        }
        return cnt;
    }
};
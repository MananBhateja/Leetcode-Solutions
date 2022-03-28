class Solution {
public:
     unordered_map<char,int>h;
   
   
    string frequencySort(string s) {
        
        for(auto x:s)
            h[x]++;
        
        sort(s.begin(), s.end(), [&](char a, char b) -> bool {
           if(h[a] == h[b]) {
               return a < b;
           } 
           return h[a] > h[b];
        });
        
        return s;
    }
};
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if(word1.size() != word2.size()) return false;
        
        unordered_map<char,int>h,p;
        
        
        for(auto x: word1){
            h[x]++;
        }
        
        for(auto x:word2 )
            p[x]++;
        
        if(h.size() != p.size()) return false;
        
        for(auto x: word2){
            
            if(!h.count(x)) return false;
        }
        
        vector<int>v,w;
        for(auto x:h){
            
            v.push_back(x.second);
        }
        
        for(auto x:p)
            w.push_back(x.second);
        
        if(v.size() != w.size() )return false;
        sort(v.begin(),v.end());
        sort(w.begin(),w.end());
        
    for(int i=0;i<v.size();i++){
        
        if(v[i] != w[i] ) return false;
    } 
        return true;
    }
};
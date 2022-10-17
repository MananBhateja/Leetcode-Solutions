class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        if(sentence.size() == 1) return false;
        
        unordered_map<char,int>h;
        
        for(auto x:sentence)
            h[x]++;
        
        if(h.size() == 26)
            return true;
        return false;
    }
};
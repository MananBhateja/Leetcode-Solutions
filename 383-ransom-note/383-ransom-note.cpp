class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int>h;
        for(int i=0;i<magazine.length();i++){
            
            h[magazine[i]]++;
        }
        int ans=0;
        for(int i=0;i<ransomNote.length();i++){
            
            if(h.count(ransomNote[i])){
                ans++;
                h[ransomNote[i]]--;
                if(h[ransomNote[i]] == 0) 
                    h.erase(ransomNote[i]);
            }
        }
        if(ans==ransomNote.length())
            return true;
        return false;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(t.length() > s.length())
            return false;
        
        unordered_map<char,int>h;
        for(int i=0;i<s.length();i++){
            
            if(h.count(s[i])){
                h[s[i]]++;
            }
            else
                h[s[i]]=1;
            
            }
        
        int count=h.size(); 
        
        
        
        for(int i=0;i<t.length();i++){
            
            if(h.count(t[i])){
                h[t[i]]--;
                
                if(h[t[i]]==0)
                    count--;
            }
            
        }
        
        if(count==0)
            return true;
        else
            return false;
    }
};
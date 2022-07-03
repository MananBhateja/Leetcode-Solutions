class Solution {
public:
    string decodeMessage(string key, string message) {
        
        unordered_map<char,char>h;
        char ch='a';
        for(auto x: key)
        {  
            if(x != 32 and !h.count(x))
            {
                  h[x]=ch;
                ch++;
            }
            
        }
        
        string ans="";
        for(auto x: message)
        {
            if(x == 32)
                ans+=32;
            else
                 ans+=h[x];
        }
        
        ans+="\0";
        message=ans;
        return message;
        
    }
};
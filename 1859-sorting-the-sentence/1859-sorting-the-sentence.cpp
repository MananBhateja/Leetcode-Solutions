class Solution {
public:
    string sortSentence(string s) {
       
        string ans="";
        map<int,string>h;
        for(int i=0;i<s.size();i++){
            
            
            if(isdigit(s[i]))
            {
                h[s[i]-'0']=ans;
            }
            else if(s[i] == 32 )
            {
                ans="";
            }
            else{
                ans+=s[i];
            }
        }
        string a="";
        int cnt=0;
     for(auto x: h)
     {   
         cnt++;
         a+=x.second;
         if(cnt != h.size())
         a+=32;
     }
        return a;
    }
};
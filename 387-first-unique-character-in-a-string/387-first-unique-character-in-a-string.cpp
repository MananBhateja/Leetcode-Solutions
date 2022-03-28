class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>h;
        queue<char>q;
        int freq[26]={0};
        int r;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            
            q.push(ch);
            freq[ch-'a']++;
            h[s[i]]=i;
            
            while(!q.empty() and freq[q.front()-'a']>1){
                q.pop();
            }
            
            if(!q.empty())
           r= h[q.front()];
            else
                r=-1;
        }
        return r;
    }
};
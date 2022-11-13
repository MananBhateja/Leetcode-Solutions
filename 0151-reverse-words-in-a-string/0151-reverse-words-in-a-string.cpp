class Solution {
public:
    string reverseWords(string s) {
        
        stringstream str(s);
        
        stack<string>st;
        
        string word;
        int cnt=0;
        while(str >> word)
        {
              st.push(word);
            cnt++;
        }
        cnt--;
        string ans="";
        while(st.size()){
            ans+=st.top();
            st.pop();
           if(cnt)
           {
               ans+=" ";
               cnt--;
           }
            
        }
        
    return ans;
        
    }
};
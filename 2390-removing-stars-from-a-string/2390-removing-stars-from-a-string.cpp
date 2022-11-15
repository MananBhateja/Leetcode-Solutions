class Solution {
public:
    string removeStars(string s) {
        
        stack<char>st;
        
        for(int i=s.size()-1;i>=0;i--){
            
            
            if( (st.size() and st.top() == '*') and s[i] != '*')
                st.pop();
            else
                st.push(s[i]);
        }
        
        string ans="";
        
        while(st.size()){
            
            ans+=st.top();
            st.pop();
        }
        
        return ans;
    }
};
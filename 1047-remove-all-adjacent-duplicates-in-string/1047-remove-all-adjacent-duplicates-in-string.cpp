class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char>st;
        
        st.push(s[s.size()-1]);
        
        for(int i=s.size()-2;i>=0;i--){
            
            if( st.size()  and st.top() == s[i] )
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
class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;
        for(int i=0;s[i]!=NULL;i++){
            char ch;
            ch=s[i];
            
            switch(ch){
                    
                case '(':
                    
                case '{':
                
                case '[':
                        st.push(ch);
                        break;
                case ')':
                        if(!st.empty() and st.top()=='('){
                            st.pop();
                        }
                    else
                        return false;
                    break;
                case '}':
                        if(!st.empty() and st.top()=='{'){
                            st.pop();
                        }
                    else
                        return false;
                        break;
                case ']':
                        if(!st.empty() and st.top()=='['){
                            st.pop();
                        }
                    else
                        return false;   
                    break;
            }
        }
        return st.empty();
        
    }
};
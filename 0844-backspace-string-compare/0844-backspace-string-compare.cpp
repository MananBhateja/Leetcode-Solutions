class Solution {
public:
    
    
    string func(string str){
        
        stack<char>st;
        for(int i=str.size()-1;i>=0;i--){
            
            if( (st.size() and st.top() == '#') and str[i] != '#')
                st.pop();
            else
                st.push(str[i]);
            
        }
        
        
        string ans="";
        
        while(st.size())
        {   
            if(st.top() != '#')
            ans+=st.top();
            st.pop();
        }
        
        return ans;
        
    }
    bool backspaceCompare(string s, string t) {
        
        s=func(s);
        t=func(t);
        
        cout<<"s "<<s<<endl;
        cout<<"t "<<t<<endl;
        
        if(!s.compare(t))
            return true;
        return false;
        
        
    }
};
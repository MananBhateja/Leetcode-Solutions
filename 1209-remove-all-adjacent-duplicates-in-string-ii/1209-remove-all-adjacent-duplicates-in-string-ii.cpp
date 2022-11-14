class Solution {
public:
    string removeDuplicates(string s, int k) {
        
       
      stack<pair<char,int>>st;
        // st.push({s[0],1});
        
        
        for(int i=0;i<s.size();i++){
        
           // cout<<" i "<<i<<endl;
            
            if( (st.size() == 0 ) or  (st.size() and st.top().first != s[i] ) )
                st.push({s[i],1});
            else if(st.size() and st.top().first == s[i])
                st.push({s[i],st.top().second+1});
            
            if(st.size() and st.top().second == k){
                int temp=k;
                while(temp--)
                    st.pop();
            }
            
        }
        
        
        string ans="";
        while(st.size()){
            ans+=st.top().first;
            st.pop();
        }
    
        reverse(ans.begin(),ans.end());
        return ans;
            
        }
};
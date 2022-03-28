class Solution {
public:
    string rev(string s, int st, int e){
        string v="";
    for(int i=st;i<=e;i++){
        
        v+=s[i];
    }       
        reverse(v.begin(),v.end());
        return v;
    }
    
    
    string reverseWords(string s) {
        
        
        int i=0;
        int j=i;
        string ans="";
        while(i<s.length()){
            
            if(s[i]==32){
                ans+=rev(s,j,i-1);
                ans+=" ";
                i++;
                j=i;
            }
            else{
                i++;
            }
            
            
        }
        
            ans+=rev(s,j,s.length()-1);
        
        return ans;
    }
};
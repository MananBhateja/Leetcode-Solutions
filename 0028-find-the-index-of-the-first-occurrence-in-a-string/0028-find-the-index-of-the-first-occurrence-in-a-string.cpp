class Solution {
public:
    int strStr(string haystack, string needle) {
        
        // unordered_map<char,int>h;
        
        int n= needle.size();
        
        
        int i=0,j=0;
        string ans="";
        while(j < haystack.size()){
            
            ans+=haystack[j];
            if(j-i+1 < n)
                j++;
            
            else if(j-i+1 == n){
                
                if(ans == needle)
                    return i;
                ans.erase(ans.begin());
                i++;
                j++;
                
            }
            
            
        }
        return -1;
    }
};
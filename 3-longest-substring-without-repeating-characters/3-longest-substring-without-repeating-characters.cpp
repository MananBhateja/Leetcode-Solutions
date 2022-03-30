class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        
        unordered_map<char,int>h;
        
        int i=0,j=0;
        
        int ans=INT_MIN;
        while(j < s.length()){
            
            if(!h.count(s[j])){
                h[s[j]]++;
                ans=max(ans,j-i+1);
                j++;
                
            }
            else{
                while(h.count(s[j])){
                    h[s[i]]--;
                        if(h[s[i]]==0)
                            h.erase(s[i]);
                    i++;
                }
                    
                
            }
            
        }
        return ans;
        
    }
};
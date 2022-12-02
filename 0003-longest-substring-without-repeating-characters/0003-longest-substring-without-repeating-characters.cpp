class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     
        if(s.size() == 0)
            return 0;
        
        unordered_map<char,int>h;
        int i=0,j=0;
        int ans=INT_MIN;
        while(j < s.size()){
            
            h[s[j]]++;
            
            if(j-i+1 == h.size()){
                
                ans=max(ans,j-i+1);
                
            }
            else 
            {
                h[s[i]]--;
                if(h[s[i]] == 0)
                    h.erase(s[i]);
                i++;
                
            }    
            j++;
        }
        
        return ans;
    }
};
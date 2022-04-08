class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)
            return false;
       string ch= to_string(x);
       
        for(int i=0,j=ch.length()-1;ch[i]!=NULL and i<=j;i++,j--){
            if(ch[i]!=ch[j])
                return false;
            
        }
        return true;
    }
};
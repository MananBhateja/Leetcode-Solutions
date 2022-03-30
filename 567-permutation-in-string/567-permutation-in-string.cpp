class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        unordered_map<char,int>h;
        
        for(int i=0;i<s1.length();i++){
            h[s1[i]]++;
        }
        
        int k=s1.length();
        
        int count=h.size();
        
        int i=0,j=0;
        int flag=0;
        while(j<s2.length()){
            
            if(h.count(s2[j])){
                h[s2[j]]--;
                
                if(h[s2[j]]==0)
                    count--;
            }
            
            if(j-i+1 < k)
                j++;
            
            else if(j-i+1==k)
            {
                    if(count==0)
                    {
                        flag=1;
                        break;
                    }

                    if(h.count(s2[i])){
                       h[s2[i]]++;

                        if(h[s2[i]]==1)
                            count++;

                    }

                    i++;
                    j++;
                
            }
            
        }
        
        if(flag)
            return true;
        else
            return false;
        
    }
};
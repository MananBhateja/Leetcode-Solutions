class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        
        unordered_map<int,int>h;
    
        int flag;
    for(auto x:arr){
        if(h.count(x)){
           flag= x;
        }
        else{
            h[x]++;
        }
    }
        
    return flag;    
        
    }
};
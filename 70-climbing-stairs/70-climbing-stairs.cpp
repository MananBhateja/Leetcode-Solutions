class Solution {
public:
    unordered_map<int,int>h;
    int climbStairs(int n) {
        
         
    if(h.count(n)) return h[n];
    if(n < 0) return 0;
    
    if(n==0) return 1;
    

int ans=climbStairs(n-1);
// if(!h.count(ans)) 
h[n-1]=ans;
int ans2=climbStairs(n-2);
h[n-2]=ans;
    return ans+ans2;
    }
};
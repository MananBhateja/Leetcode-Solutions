class Solution {
public:
    vector<vector<int>> r;
        vector<int> ans;
    void help( int n , int left , int k)
    {
     if(k == 0)
     {
         r.push_back(ans);
         return ;
     }
        
        for(int i = left ; i <= n ; i++)
        {
            ans.push_back(i);
            help(n,i+1,k-1);
            ans.pop_back();
        }
        
    }
    
    
    vector<vector<int>> combine(int n, int k) {
        
        
        help(n,1,k);
        
        return r;
        
        
    }
};
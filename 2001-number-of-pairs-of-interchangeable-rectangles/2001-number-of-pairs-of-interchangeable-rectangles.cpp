class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
     
        
        vector<double>v;
        
        for(auto x: rectangles){
            
            v.push_back( ((x[0]*1.00)/x[1]) );
            
            
        }

        
        long long cnt=0;
        unordered_map<double,long long>h;
        for(auto x: v)
        {
            if(h.count(x))
                cnt+=h[x];
            h[x]++;
            
        }
        
        // cout<<endl;
        
        return cnt;
        
    }
};
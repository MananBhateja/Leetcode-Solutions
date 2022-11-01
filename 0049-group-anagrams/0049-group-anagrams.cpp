class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        
        unordered_map<string,list<string>>h;
         vector<vector<string>>ans;
        
        for(auto x: strs ){
            
            string s=x;
            sort(s.begin(),s.end());
            h[s].push_back(x);
        }
        
        for(auto x: h){
            // cout<<x.first<<" ";
            vector<string>v;
            for(auto y :x.second){
                // cout<<y<<" ";
                v.push_back(y);
            }
           ans.push_back(v);
        }
      
        return ans;
    }
};
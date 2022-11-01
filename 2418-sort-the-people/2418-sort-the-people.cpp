class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        map<int,string>h;
        
        for(int i=0;i<heights.size();i++){
            h[heights[i]]=names[i];
        }
        
        sort(heights.begin(),heights.end(),greater<int>());
        
        
        vector<string>s;
        
        for(auto x:heights)
            s.push_back(h[x]);
        
        return s;
    }
};
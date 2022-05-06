class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        vector<int>v(score);
        priority_queue<int>p(v.begin(),v.end());
        
        int k=1;
        unordered_map<int,string>h;
        while(k){
            
            h[p.top()]="Gold Medal";
            p.pop();
           if(!p.empty()){
                h[p.top()]="Silver Medal";
            p.pop();
           
           }
            
            if(!p.empty()){
                
                 h[p.top()]="Bronze Medal";
            p.pop();
            }
            
            k--;
        }
        cout<<"yaha tak"<<endl;
        int cnt=4;
        while(!p.empty()){
            h[p.top()]=to_string(cnt);
            p.pop();
            cnt++;
        }
          cout<<"abb yaha tak"<<endl;
     vector<string>s;
        for(auto x:score){
           
            if(h.count(x)){
                s.push_back(h[x]);
            }

        }
        return s;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int>ans;
        typedef pair<int, int> pi;
        unordered_map<int,int>h;
       priority_queue<pi, vector<pi>, greater<pi> > p;
        for(auto x:nums){
            h[x]++;
        }
        int cnt=0;
        for(auto node:h){
            
            if(cnt < k){
                p.push(make_pair(node.second,node.first) );
               // ans.push_back(node.first);
                cnt++;
            }
            else{
             //   int tp=p.top();
                if(p.top().first < node.second ){
                    p.pop();
                    p.push(make_pair(node.second,node.first));
                }
            }
        }
        
        
        while(!p.empty()){
            
           pair<int, int> tp=p.top();
            ans.push_back(tp.second);
            p.pop();
        }
        return ans;
    }
};
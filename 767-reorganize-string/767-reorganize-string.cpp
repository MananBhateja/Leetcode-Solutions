class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>h;
        
        for(auto x:s){
            h[x]++;
        }
        
        typedef pair<int,char>p;
        
        priority_queue<p>pq;
        
        for(auto x:h){
          pq.push(make_pair(x.second,x.first));
            
            
        }
        
        string ans="";
        while(!pq.empty()){
            
         if(pq.size() > 1){
             
             p a=pq.top();
             pq.pop();
             
             p b =pq.top();
             pq.pop();
             ans+=a.second;
             ans+=b.second;
             
             a.first--;
             if(a.first > 0 )
                 pq.push(a);
             b.first--;
             if(b.first > 0)
                 pq.push(b);
             
         } 
         else{
             
             p c=pq.top();
             pq.pop();
             
             if(c.first == 1 ){
                 ans+=c.second;
             }
             else{
                 ans="";
             }
         }   
            
            
        }
        
        return ans;
        
    }
};
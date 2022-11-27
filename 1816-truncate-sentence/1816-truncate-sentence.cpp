class Solution {
public:
    string truncateSentence(string s, int k) {
        
        stringstream str(s);
   
    // To store individual words
    string word;
 
    int count = 0;
        queue<string>q;
    while (str >> word)
    {   q.push(word);
        
        count++;
    }
    int t = k < q.size() ? k : q.size() ;
        t--;
        string ans="";
   while(t--){
       
       ans+=q.front();
       q.pop();
       ans+=" ";
   }
        
        ans+=q.front();
        q.pop();
        
        return ans;
        
    }
};
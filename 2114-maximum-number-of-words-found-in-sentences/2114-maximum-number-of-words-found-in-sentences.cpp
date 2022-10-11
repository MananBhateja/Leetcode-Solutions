class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        // if(sentences.size() == 1) return sentences[0].size();
        
        int mx=INT_MIN;
        for(auto x: sentences){
            
            stringstream s(x);
            
            string word;
            
            int cnt=0;
            
            while(s >> word)
                cnt++;
            
            mx=max(cnt,mx);
            
        }
        return mx;
    }
};
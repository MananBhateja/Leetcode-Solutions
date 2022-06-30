class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        
    unordered_map<int,int>s;
        
        for(auto x: arr)
            s[x]++;
        
        int i=0;
        
        int mx=INT_MIN,cnt=0;
        while(i < arr.size()){
            
            if(! s.count(arr[i]-1) and s[arr[i]] > 0 ){
                s[arr[i]]=0;
               int x=arr[i]+1;
                while(s.count(x)){
                    cout<<x<<endl;
                    cout<<"cnt"<<cnt<<endl;  
                    cnt++;
                    x++;
                }
               mx=max(mx,cnt);
                cnt=0;
             }
           
            
            i++;
            
            
        }
        
        if(mx != INT_MIN) return mx+1;
        else return cnt=0;
        
    }
};
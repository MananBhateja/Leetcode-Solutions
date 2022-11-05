class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
     unsigned int xora=0;
        
        for(auto x:nums)
            xora^=x;
        
      unsigned int n=xora;
        int cnt=0;
        while(n>0){
            if(n&1){
                break;
            }
            n=n>>1;
            cnt++;
        }
       cout<<"cnt"<<cnt<<endl;
        cout<<(1<<cnt)<<endl;
        
      unsigned int s=1<<cnt;
        
       unsigned int x1=0,x2=0;
        for(auto x:nums){
            
            if(x & s)
                x1^=x;
            else
                x2^=x;
        
        }
        vector<int>v;
        v.push_back(x1);
        v.push_back(x2);
        return v;
    }
};
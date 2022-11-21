class Solution {
public:
    bool isUgly(int n) {
        
        if(n == 1) return true;
        
        if( n <= 0 ) return false;
        
        
        vector<int>arr={2,3,5};
        
        for(auto x:arr){
            
            while(n%x ==0){
                n/=x;
                cout<<"n "<<n<<endl;
                cout<<"x "<<x<<endl;
            }
            
        }
        if(n == 0 or n==1) return true;
        return false;
    }
};
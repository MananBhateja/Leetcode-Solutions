// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        unordered_map<int,int>h;
    int s=0,sum=0;
    int mx=0;
   for(int i=0; i<arr.size();i++){
       s+=arr[i];
      
       if(s == 0) 
           mx=i+1;
       else{
           
           if(h.count(s)){
               mx=max(mx,i-h[s]);
           }
           else{
               h[s]=i;
           }
           
       }
       
   }
 return mx;

    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends
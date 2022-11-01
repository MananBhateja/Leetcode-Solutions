//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
//  int ans=INT_MIN;
//     for(int i=0;i<s.size();i++){
        
        
//         for(int j=i;j<s.size();j++){
            
//             // ans=max(ans,j-i+1);
//             unordered_map<char,int>h;
//             for(int k=i;k<=j;k++){
//                 h[s[k]]++;
//                 // cout<<s[k]<<" ";
//             }
//             if(h.size() == k)
//             ans=max(ans,j-i+1);
//             // cout<<endl;
//         }
//     } 
//  if (ans == INT_MIN)
//  return -1;
//  return ans;


int i=0,j=0;

int ans=INT_MIN;
unordered_map<char,int>h;
while(j < s.size()){
    
    h[s[j]]++;
    
    if(h.size() < k)
    j++;
    
    else if(h.size() == k){
        
        ans=max(ans,j-i+1);
        j++;
    }
    else if(h.size() > k) {
        
        while(h.size() > k){
            h[s[i]]--;
            if(h[s[i]] == 0)
            h.erase(s[i]);
            i++;
        }
        j++;
    }
    
}
if(ans == INT_MIN)
return -1;
return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends
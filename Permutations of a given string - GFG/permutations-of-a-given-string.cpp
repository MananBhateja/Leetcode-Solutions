//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	void func(int ind, string s, set<string>&ans){
	    
	    if(ind+1 == s.size()){
	        ans.insert(s);
	        return ;
	    }
	    
	    else{
	        
	    for(int i=ind;i<s.size();i++){
	        
	        swap(s[i],s[ind]);
	        func(ind+1,s,ans);
	        swap(s[i],s[ind]);
	    }
	    
	    }
	    return ;
	}
	
		vector<string>find_permutation(string s)
		{
		    set<string>ans;
		    func(0,s,ans);
		    vector<string>v;
		    for(auto x: ans){
		        v.push_back(x);
		    }
		    sort(v.begin(),v.end());
		    return v;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
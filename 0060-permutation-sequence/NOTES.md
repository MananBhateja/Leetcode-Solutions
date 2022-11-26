​
​
// This is recursive solutionn .....resulting in  TLE
class Solution {
public:
void func(int ind, string s,vector<string>&v){
if(ind+1 == s.size()){
cout<<"s "<<s<<endl;
v.push_back(s);
return ;
}
for(int i=ind;i<s.size();i++){
swap(s[i],s[ind]);
func(ind+1,s,v);
swap(s[i],s[ind]);
}
return ;
}
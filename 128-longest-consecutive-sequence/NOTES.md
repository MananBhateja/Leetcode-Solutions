class Solution {
public:
int longestConsecutive(vector<int>& arr) {
if(arr.size() == 0) return 0;
sort(arr.begin(),arr.end());
int i=0,j=i+1;
int mx=INT_MIN,cnt=0;
while(j < arr.size()){
if(arr[j] ==  arr[i] )
{
i++;
j++;
continue;
}
if(arr[j] - arr[i]  == 1){
cnt++;
mx=max(mx,cnt);
}
else{
cnt=0;
}
i++;
j++;
}
if(mx != INT_MIN)  return mx+1;
else return cnt+1;
}
};
class Solution {
public:
    static bool comp(vector<int>a,vector<int>b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truck) {
        
        
        sort(boxTypes.begin(),boxTypes.end(),comp);
        
        int ans=0;
        for(int i=0;i<boxTypes.size();i++){
            
            if(truck >= boxTypes[i][0] ){
                truck-=boxTypes[i][0];
                ans+=boxTypes[i][1]*boxTypes[i][0];
            }
            else if(truck < boxTypes[i][0]){
                ans+=truck*boxTypes[i][1];
                truck=0;
            }
        }
        
        return ans;
        
        
    }
};
class Solution {
public:
    vector<int> getRow(int rowIndex) {
     
        vector<vector<int>>ans(rowIndex+1);
        vector<int>a;
        a.push_back(1);
        
        for(int i=0;i<rowIndex+1;i++){
            
            ans[i].resize(i+1);
            ans[i][0]=ans[i][i]=1;
            
            for(int j=1;j<i;j++){
                
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
                if(i== rowIndex){
                    a.push_back(ans[i][j]);
            
                }
            }
            
        }
        if(rowIndex > 0)
        a.push_back(1);
        return a;
        
    }
};
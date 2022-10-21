class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
     
        
        unordered_map<int,int>row;
        
        unordered_map<int,int>col;
        
        
        
        
        for(int i=0;i<mat.size();i++){
            
            int cnt=0,c=0;
            int temp=-1;
            for(int j=0;j<mat[0].size();j++){
                
                if(mat[i][j] == 1)
                    cnt++;
                // if(mat[j][i] == 1){
                //    c++;
                //     temp=j;
                // }
                
            }
            
            if(cnt == 1)
                row[i]=1;
            // if(c == 1)
            //     col[temp]=1;
            
        }
        
        for(int j=0;j<mat[0].size();j++){
            
            int cnt=0,temp=-1;
            for(int i=0;i<mat.size();i++){
               
                if(mat[i][j] == 1)
                {cnt++;
                temp=i;
                }
                
            }
            
            if(cnt == 1)
                col[temp]=1;
                
        }
        
        
        for(auto x:row)
            cout<<x.first<<" ";
        
        cout<<endl;
        
        for(auto x:col)
            cout<<x.first<<" ";
        
        int ans=0;
        
        for(auto x:row){
            if(col.count(x.first))
                ans++;
        }
        return ans;
    }
};
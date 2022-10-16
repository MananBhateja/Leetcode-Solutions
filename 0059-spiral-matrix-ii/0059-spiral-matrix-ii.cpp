class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int j=0;
        // vector<vector<int>>matrix(n,-1);
         vector<vector<int>>matrix(n,vector<int>(n,-1));
        // int i=1;
        // while(j < n){
        //     vector<int>v;
        //     for(int k=0;k<n;k++)
        //        {
        //         v.push_back(i);
        //         i++;
        //     }
        //     matrix.push_back(v);
        //     j++;
        // }
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        
        int cnt=1;
        int top=0,down=matrix.size()-1,left=0,right=matrix[0].size()-1;
        
        int dir=0;
        vector<vector<int>>v;
        while(top <= down and left <=right){
            vector<int>ans;
            if(dir == 0){
                
                
                for(int i=left ;i<=right;i++){
                    
                    // ans.push_back(matrix[top][i]);
                    matrix[top][i]=cnt;
                    cnt++;
                }
                top+=1;
            }
            else if(dir == 1){
                
                for(int i=top;i<=down;i++){
                    matrix[i][right]=cnt;
                    cnt++;
                }
                right-=1;
                
            }
            
            else if(dir == 2){
                
                
                for(int i=right;i>=left;i--){
                    matrix[down][i]=cnt;
                    cnt++;
                }
                down-=1;
            }
            
            else if(dir == 3){
                
                
                for(int i=down;i>=top;i--){
                    matrix[i][left]=cnt;
                    cnt++;
                }
                left+=1;
               
            }
            // v.push_back(ans);
            dir=(dir+1)%4; 
        }
        
        return matrix;
    }
};
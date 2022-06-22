class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        unordered_map<int,int>row;
        unordered_map<int,int>column;
        for(int i=0;i<matrix.size();i++){
            
            for(int j=0;j<matrix[i].size();j++){
                
                if(matrix[i][j] == 0)
                {
                    row[i]++;
                    column[j]++;
                }
                
            }
        }
        
        for(int i=0;i<matrix.size();i++){
            
            if(row.count(i)){
                for(int j=0;j<matrix[i].size();j++){
                    if(matrix[i][j] !=0)
                    {
                        matrix[i][j]=0;
                        // if(column.count(j)){
                        //     col[j]--;
                        //     if(col[j] == 0)
                        //         col.erase(j);
                        // }
                    }
                }
            }
        }
        
        
        for(int j=0;j<matrix[0].size();j++){
            
            if(column.count(j)){
                for(int i=0;i<matrix.size();i++){
                    
                    if(matrix[i][j] !=0){
                        matrix[i][j]=0;
                    }
                }
            }
                
        }
        
        
    
        
        
    }
};
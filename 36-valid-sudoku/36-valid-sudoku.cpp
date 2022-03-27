
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       return solve(board);
    }
    
    bool solve(vector<vector<char>>& board){
        for(int i = 0 ; i < board.size() ; i++){
            for(int j = 0 ; j < board[i].size() ; j++){
               
                    if(board[i][j] != '.'){
                            if(is_valid(board, i, j)){
                                
                            }

                             else
                                return false;

                    }
                
            }
        }
        return true;
    }
    
    bool is_valid(vector<vector<char>>& board, int row, int col){
        
            unordered_map<char,int>h;
            for(int i = 0 ; i < 9 ; i++){

               if(isdigit(board[i][col])){
                   
                    if(h.count(board[i][col]))
                {   //cout<<board
                    cout<<"h wla flase"<<endl;
                    return false;
                }
                else
                    h[board[i][col]]++;
               }
                }
        
         unordered_map<char,int>m;
            for(int i=0;i<9;i++){
               
                if(isdigit(board[row][i])){
                    
                    if(m.count(board[row][i]))
                {
                    cout<<"m wala false"<<endl;
                    return false;
                }
                
                else
                    m[board[row][i]]++;
                }
                
            }
            
        
        int starti=(row/3)*3;
        int startj=(col/3)*3;
        unordered_map<char,int>v;
        for(int i=starti;i<starti+3;i++){
            
            for(int j=startj;j<startj+3;j++){
                
               if(isdigit(board[i][j])){
                   
                    if(v.count(board[i][j]) ) 
                {
                    cout<<"v wala false"<<endl;
                    return false;
                }
                else
                    v[board[i][j]]++;
               }
            }
        }
        
        return true;
        }
       
    
};
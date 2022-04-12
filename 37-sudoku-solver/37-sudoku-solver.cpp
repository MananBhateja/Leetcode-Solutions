class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    
    bool solve(vector<vector<char>>& board){
        for(int i = 0 ; i < board.size() ; i++){
            for(int j = 0 ; j < board[0].size() ; j++){
                if(board[i][j] == '.'){
                    for(char c = '1' ; c <= '9' ; c++){
                        if(is_valid(board, i, j, c)){
                            board[i][j] = c;
                            if(solve(board)) return true;
                            else board[i][j] ='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    bool is_valid(vector<vector<char>>& board, int row, int col, char c){
        for(int i = 0 ; i < 9 ; i++){
            if(board[i][col] == c or board[row][i] == c) return false;
                       
            
          //  n=sqrt(n);
        
        int starti=(row/3)*3;
        int startj=(col/3)*3;
        
        for(int i=starti;i<starti+3;i++){
            
            for(int j=startj;j<startj+3;j++){
                
                if(board[i][j] == c) 
                    return false;
            }
        }
        }
        return true;
    }
};
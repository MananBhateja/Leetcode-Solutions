class Solution {
public:
    
    int dx[4] = {0,0,-1,1};
    int dy[4] = {1,-1,0,0}; 
    int m , n;
    
    bool valid(int x , int y, vector<vector<int>>& grid){
        return (x>=0 && y>= 0 && x<m && y<n && grid[x][y] == 1) ; 
    }
    
    bool check(vector<vector<int>>& grid){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1)
                    return 0;
            }
        }
        return 1; 
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        int ans = 0 ; m =grid.size() , n = grid[0].size();
        // grid
        queue<pair<int,int>> q; 
        vector<vector<bool>> visited(m,vector<bool>(n,0)); 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j}); 
                    visited[i][j] = 1; 
                }
            }
        }        
        //// queue
        
        if((q.empty() && check(grid)) || q.size() == m*n)
            return 0;
        
        while(!q.empty()){
            int size = q.size(); 
            for(int i=0;i<size;i++){
                auto curr = q.front();
                q.pop(); 
                //pop
                for(int j=0;j<4;j++){
                    int x = curr.first + dx[j] , y = curr.second + dy[j]; 
                    if(valid(x,y,grid) && !visited[x][y]) {
                        grid[x][y] = 2; 
                        visited[x][y] = 1; 
                        q.push({x,y});
                    }
                }
            }
            ans++; 
        }
        
        if(check(grid) )
            return ans-1 ;
        return -1; 
    }
};
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        // BFS queue
        queue<pair<int,int>>Q;
        
        int m = mat.size();
        int n = mat[0].size();
        
        // no element and so return empty array
        if(n==0) return {{}};
        
        // push all zero nodes in to queue
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(mat[i][j]==0) Q.push({i,j});
        
        // result vector
        vector<vector<int>>result(m,vector<int>(n,0));
        
        int rowOffset[] = {0,0,1,-1};
        int colOffset[] = {1,-1,0,0};
        
        int cx,cy,tx,ty;
        
        // BFS level
        int l = -1;
        
        // loop until queue is empty
        while(!Q.empty())
        {
            l++;
            int k = Q.size();
            
            // level order traverse
            while(k--)
            {
                cx = Q.front().first;
                cy = Q.front().second;
                Q.pop();
                
                // process neighbor nodes
                for(int p=0;p<4;p++)
                {
                    tx = cx + rowOffset[p];
                    ty = cy + colOffset[p];
                    
                    // add neighbor nodes in to queue which are 1 and do not have result
                    if(tx<m && tx>=0 && ty<n && ty>=0 && mat[tx][ty]==1 && result[tx][ty]==0)
                    {
                        result[tx][ty] = l+1;
                        Q.push({tx,ty});
                    }
                }
            }
        }
        
        return result;
    }
};
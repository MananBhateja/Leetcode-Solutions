class Solution {
public:
    // tipa hua.....
    int v[201][201];
    int minPath(vector<vector<int>>& triangle, int size, int currIndex, int currRow) {
        if(size==0)
            return 0;
        if(v[currRow][currIndex]!=-1)
            return v[currRow][currIndex];
        int itaken = triangle[currRow][currIndex] + minPath(triangle, size-1, currIndex, currRow+1);
        int inottaken = triangle[currRow][currIndex] + minPath(triangle, size-1, currIndex+1, currRow+1);
        v[currRow][currIndex] = min(itaken, inottaken);
        return min(itaken, inottaken);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(v,-1,sizeof(v));
        int n = triangle.size();
        return minPath(triangle,n,0,0);
    }
};
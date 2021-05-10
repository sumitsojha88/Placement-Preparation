

Question Link:- https://leetcode.com/problems/island-perimeter/



class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int res = 0;
        int r = grid.size();
        int c = grid[0].size();
        
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(grid[i][j] == 1)
                {
                    res += (i == 0 || grid[i-1][j] == 0 ? 1 : 0);
                    res += (i == r-1 || grid[i+1][j] == 0 ? 1 : 0);
                    res += (j == 0 || grid[i][j-1] == 0 ? 1 : 0);
                    res += (j == c-1 || grid[i][j+1] == 0 ? 1 : 0);
                }
            }
        }
        
        return res;
    }
};

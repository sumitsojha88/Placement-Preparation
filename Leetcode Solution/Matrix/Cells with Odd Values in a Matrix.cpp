
Example 1:


Input: m = 2, n = 3, indices = [[0,1],[1,1]]
Output: 6
Explanation: Initial matrix = [[0,0,0],[0,0,0]].
After applying first increment it becomes [[1,2,1],[0,1,0]].
The final matrix is [[1,3,1],[1,3,1]], which contains 6 odd numbers.
Example 2:


Input: m = 2, n = 2, indices = [[1,1],[0,0]]
Output: 0
Explanation: Final matrix = [[2,2],[2,2]]. There are no odd numbers in the final matrix.
 

Constraints:

1 <= m, n <= 50
1 <= indices.length <= 100
0 <= ri < m
0 <= ci < n





class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        
            vector<int> row(n,0);
            vector<int> col(m,0);
            for(int i=0;i<indices.size();i++)
            {
                    row[indices[i][0]]++;
                    col[indices[i][1]]++;
            }
            int count=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                        if((row[i]+col[j])%2)
                                count++;
                }
            }
            
            
            return count;
            
    }
};

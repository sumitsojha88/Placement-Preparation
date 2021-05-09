

Apprach:

Brute force
in this we can simply traverse the matrix and count negative elements.
  
Binary Search
we will apply binary search in each grid vector and find no. of negative elements.


Example 1:

Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.
Example 2:

Input: grid = [[3,2],[1,0]]
Output: 0
Example 3:

Input: grid = [[1,-1],[-1,-1]]
Output: 3
Example 4:

Input: grid = [[-1]]
Output: 1
 

Constraints:

m == grid.length
n == grid[i].length
1 <= m, n <= 100
-100 <= grid[i][j] <= 100








class Solution {
public:
 static int solve(const vector<int>& a) {
         int i=0;
         int j=a.size()-1;
         while(i<=j)
         {
                 int m = (i+j)/2;
                 if(a[m]>=0)
                 {
                         i = m+1;
                 }
                 else
                 {
                         j = m-1;
                 }
                 
         }
         
         
         return a.size()-j -1;
    }
        
    int countNegatives(vector<vector<int>>& grid) {
      
             int ans=0;
            for(int i=0;i<grid.size();i++)
            {
                    ans += solve(grid[i]);
            }
            
            return ans;
    }
};

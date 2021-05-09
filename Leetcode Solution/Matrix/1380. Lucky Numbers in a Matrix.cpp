
Example 1:

Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
Output: [15]
Explanation: 15 is the only lucky number since it is the minimum in its row and the maximum in its column
Example 2:

Input: matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]
Output: [12]
Explanation: 12 is the only lucky number since it is the minimum in its row and the maximum in its column.
Example 3:

Input: matrix = [[7,8],[1,2]]
Output: [7]
 

Constraints:

m == mat.length
n == mat[i].length
1 <= n, m <= 50
1 <= matrix[i][j] <= 10^5.
All elements in the matrix are distinct.

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
            
            vector<int> ans;
              int n=mat.size();
              int m=mat[0].size();
             unordered_map<int,int> mpr;
            unordered_map<int,int> mpc;
            for(int i=0;i<n;i++)
            { 
                     int mini = INT_MAX;
                 for(int j=0;j<m;j++)
                  {
                                mini = min(mini,mat[i][j]);
                  }
                  //  ans.push_back(mini);
                    mpr[mini]++;
            }
            for(int i=0;i<m;i++)
            { 
                     int maxi = INT_MIN;
                 for(int j=0;j<n;j++)
                  {
                                maxi = max(maxi,mat[j][i]);
                  }
                  //  ans.push_back(maxi);
                    mpc[maxi]++;
            }
            
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                            if(mpr[mat[i][j]] && mpc[mat[i][j]])
                            {
                                    ans.push_back(mat[i][j]);
                            }
                    }
            }
            
            return ans;
            
          
    }
};

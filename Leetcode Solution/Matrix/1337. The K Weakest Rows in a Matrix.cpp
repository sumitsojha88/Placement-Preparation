

Approach:
1) we calculate total no. of one present in row of matrix using binary search
2) we will store no of ones count and index in priority queue and usint this we will find weakest row.

Example 1:

Input: mat = 
[[1,1,0,0,0],
 [1,1,1,1,0],
 [1,0,0,0,0],
 [1,1,0,0,0],
 [1,1,1,1,1]], 
k = 3
Output: [2,0,3]
Explanation: 
The number of soldiers in each row is: 
- Row 0: 2 
- Row 1: 4 
- Row 2: 1 
- Row 3: 2 
- Row 4: 5 
The rows ordered from weakest to strongest are [2,0,3,1,4].
Example 2:

Input: mat = 
[[1,0,0,0],
 [1,1,1,1],
 [1,0,0,0],
 [1,0,0,0]], 
k = 2
Output: [0,2]
Explanation: 
The number of soldiers in each row is: 
- Row 0: 1 
- Row 1: 4 
- Row 2: 1 
- Row 3: 1 
The rows ordered from weakest to strongest are [0,2,3,1].
 

Constraints:

m == mat.length
n == mat[i].length
2 <= n, m <= 100
1 <= k <= m
matrix[i][j] is either 0 or 1.
  
  
  
  
  
  class Solution {
public:
        int solve(vector<int>& a)
        {
               int i=0;
                int j=a.size()-1;
          while(i<=j)
          {
                  int m = (i+j)/2;
                  if(a[m]==1)
                  {
                          i = m+1;
                  }
                  else
                  {
                          j = m-1;
                  }
          }
                
                return i;
                   
        }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
          vector<int> ans;
            priority_queue<pair<int,int>> pq;
            for(int i=0;i<mat.size();i++)
            {
                    int temp = solve(mat[i]);
                    pq.push({temp,i});
                   
            }
            
            while(pq.size())
            {
                    ans.push_back(pq.top().second);
                    pq.pop();
            }
            
            reverse(ans.begin(),ans.end());
            
            vector<int> res;
            for(int i=0;i<k;i++)
            {
                    res.push_back(ans[i]);
            }
            
            
            
            return res;
            
            
            
    }
};

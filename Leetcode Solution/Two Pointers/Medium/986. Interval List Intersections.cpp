

Approach: 
Two pointer technioque

let us solve using testcase1
first we will find maximum among A[i][0] and B[j][0]
and minimum of A[i][1] and B[i][1]
AND we will push in ans array
and check  if A[i][1]<B[j][1] than we will increase i pointer
else j pointer
try to dry run with first example similarly what we did.




Example 1:


Input: firstList = [[0,2],[5,10],[13,23],[24,25]], secondList = [[1,5],[8,12],[15,24],[25,26]]
Output: [[1,2],[5,5],[8,10],[15,23],[24,24],[25,25]]
Example 2:

Input: firstList = [[1,3],[5,9]], secondList = []
Output: []
Example 3:

Input: firstList = [], secondList = [[4,8],[10,12]]
Output: []
Example 4:

Input: firstList = [[1,7]], secondList = [[3,10]]
Output: [[3,7]]



class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
             vector<vector<int>> ans;
             int n = A.size();
             int m = B.size();
             int i = 0, j = 0;
              while(i<n && j<m)
              {
                   
                      int maxi = max(A[i][0],B[j][0]);
                      int mini = min(A[i][1],B[j][1]);
                      
                      if(maxi<=mini)
                      {
                              ans.push_back({maxi,mini});
                      }
                      
                      if(A[i][1]<B[j][1])
                      {
                              i++;
                      }
                      else
                      {
                              j++;
                      }
              }
            return ans;
        
    }
};

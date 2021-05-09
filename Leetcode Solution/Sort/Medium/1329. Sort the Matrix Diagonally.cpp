

Question Link: https://leetcode.com/problems/sort-the-matrix-diagonally/

Solution: 


class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
            
            int n=mat.size();
            int m=mat[0].size();
            unordered_map<int,priority_queue<int,vector<int>,greater<int>>> mp;
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                            mp[i-j].push(mat[i][j]);
                    }
            }
            
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                            mat[i][j] = mp[i-j].top();
                            mp[i-j].pop();
                    }
            }
        
            return mat;
    }
};

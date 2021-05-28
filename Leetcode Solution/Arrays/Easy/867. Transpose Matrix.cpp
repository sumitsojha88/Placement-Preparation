
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
            
            int n=A.size();
            int m=A[0].size();
            vector<vector<int>> dp;
            for(int i=0;i<m;i++)
            {
                    vector<int> t;
                    for(int j=0;j<n;j++)
                    {
                        t.push_back(A[j][i]);   
                             
                    }
                    dp.push_back(t);
            }
            
            return dp;
    }
};


class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
            int sum=0;
            vector<int> ans;
            for(int i=0;i<A.size();i++)
            {
                    if(A[i]%2==0)
                    sum += A[i];
            }
            for(int i=0;i<queries.size();i++)
            {
                    if(A[queries[i][1]]%2==0)
                    sum -= A[queries[i][1]];
                    
                   A[queries[i][1]] +=  queries[i][0];
                    
                    
                    if(A[queries[i][1]]%2==0)
                    {
                   sum += A[queries[i][1]];
                    ans.push_back(sum);
                    }
                    else
                    {
                            ans.push_back(sum);
                    }
            }
            
            
            return ans;
        
    }
};

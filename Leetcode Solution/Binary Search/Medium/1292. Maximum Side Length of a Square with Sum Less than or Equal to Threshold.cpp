

class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int t) {
           
            //O(m*n*min(n,m)) solution
        /*   int n=mat.size();
           int m=mat[0].size();
            vector<vector<int>> dp(n+1,vector<int>(m+1,0));
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                            dp[i+1][j+1] = mat[i][j]+dp[i][j+1]+dp[i+1][j]-dp[i][j];
                    }
            }
            int sum=0;
           for(int k=min(n,m);k>=0;k--)
           {
                   for(int i=k;i<n+1;i++)
                   {
                           for(int j=k;j<m+1;j++)
                           {
                              sum = dp[i][j] - dp[i-k][j]-dp[i][j-k]+dp[i-k][j-k];  
                                      
                                      if(sum<=t)
                                      {
                                              return k;
                                      }
                           }
                   }
           }
            
            return -1;  */
            
            //
           int n=mat.size();
           int m=mat[0].size();
            vector<vector<int>> dp(n+1,vector<int>(m+1,0));
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                            dp[i+1][j+1] = mat[i][j]+dp[i][j+1]+dp[i+1][j]-dp[i][j];
                    }
            }
            int sum=0;
            int l=0;
            int r = min(n,m);
            int ans=0;
            while(l<=r)
            {
                    int mid = (l+r)/2;
                    bool flag = false;
                     for(int i=mid;i<n+1;i++)
                   {
                           for(int j=mid;j<m+1;j++)
                           {
                              sum = dp[i][j] - dp[i-mid][j]-dp[i][j-mid]+dp[i-mid][j-mid];  
                                      
                                      if(sum<=t)
                                      {
                                              flag = true;
                                      }
                           }
                   }
                    
                    if(flag)
                    { ans=mid;
                            l = mid+1;
                    }
                    else
                            r=mid-1;
            }
            
            return ans;
        
    }
};

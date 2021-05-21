

class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
            
            int n=box.size();
            int m=box[0].size();
            vector<vector<char>> dp(m,vector<char> (n,'.'));
           
            
            for(int i=0;i<n;i++)
            {
                    int k=m;
                    int j=m-1 ;
                    while(j>=0)
                    {
                            if(box[i][j]=='#')
                            {
                                    dp[--k][i] = '#';
                            }
                            else if(box[i][j]=='*')
                            {
                                    k = j;
                                    dp[j][i] = '*';
                            }
                            
                            j--;
                                    
                    }
            }
            
            for(int i=0;i<m;i++)
            {
                    reverse(dp[i].begin(),dp[i].end());
            }
              
            return dp;
    }
};

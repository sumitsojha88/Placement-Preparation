Approach: Try all the possible positions for the queen.
 isSafe functions check whether
the current position is safe or not.
  
  
Time Complexity: O(2^n)
Space Complexity: O(2^n)


class Solution {
public:
        bool issafe(vector<string> a,int r,int c,int n)
        {
              for(int row=0;row<r;row++)
              {
                      if(a[row][c]=='Q')
                      {
                              return false;
                      }
              }
                
               int row=r;
               int col=c;
               while(row>=0 && col>=0)
               {
                       if(a[row][col]=='Q')
                               return false;
                       
                       row--;
                       col--;
               }
                row=r;
                col=c;
               while(row>=0 && col<n)
               {
                       if(a[row][col]=='Q')
                               return false;
                       
                       row--;
                       col++;
               }
                
                return true;
                
        }
        void backtrack(vector<vector<string>>& ans,int n,vector<string>& t,int r)
        {
                if(r==t.size())
                {
                        ans.push_back(t);
                        return;
                }
                for(int i=0;i<t.size();i++)
                {
                      if(issafe(t,r,i,n))
                      {
                             t[r][i] = 'Q';
                             backtrack(ans,n,t,r+1);
                              t[r][i] ='.';      
                      }
                }
        }
    vector<vector<string>> solveNQueens(int n) {
            
            vector<vector<string>> ans;
            vector<string> t(n,string(n,'.'));
            backtrack(ans,n,t,0);
            return ans;     
    }
};


Time complexity: O(9^(n*n)). 
For every unassigned index, there are 9 possible options so the time complexity is O(9^(n*n)).
The time complexity remains the same but there will be some early pruning so the time taken will
be much less than the naive algorithm but the upper bound time complexity remains the same.
      
Space Complexity: O(n*n). 
To store the output array a matrix is needed.


class Solution {
public:
      void helper(int r,int c,vector<vector<char>>& a,vector<unordered_map<int,int>>& mpr,vector<unordered_map<int,int>>& mpc,vector<vector<unordered_map<int,int>>>& mp){
              
              if(r==8 && c==8)
              {
                      return ;
              }
              if(c==9)
              {
                      helper(r+1,0,a,mpr,mpc,mp); 
                      return ;
              }
              if(a[r][c]!='.')
              {
                      helper(r,c+1,a,mpr,mpc,mp); 
                      return ;
              }
              for(int i=1;i<=9;i++)
              {
                      int rs=r/3;
                      int cs=c/3;
                      if(!mp[rs][cs][i] && !mpr[r][i] && !mpc[c][i])
                      {
                              mp[rs][cs][i]=1;
                              mpr[r][i]=1;
                              mpc[c][i]=1;
                              a[r][c] = i + '0'; 
                              helper(r,c+1,a,mpr,mpc,mp);
                              mp[rs][cs][i] = 0;
                              mpr[r][i]=0;
                              mpc[c][i]=0;
                              a[r][c] = '.';       
                      }       
              } 
              
              
        }
       
    void solveSudoku(vector<vector<char>>& board) {
            
            vector<vector<unordered_map<int,int>>> mp(3,vector<unordered_map<int,int>> (3));
            vector<unordered_map<int,int>> mpr(9);
            vector<unordered_map<int,int>> mpc(9);
            for(int i=0;i<9;i++)
            {
                    for(int j=0;j<9;j++)
                    {
                            if(board[i][j]!='.')
                            {
                                    mpr[i][board[i][j]-'0'] = 1;
                                    mpc[j][board[i][j]-'0'] = 1;
                                    mp[i/3][j/3][board[i][j]-'0'] = 1;
                            }
                    }     
            }     
           helper(0,0,board,mpr,mpc,mp);
            
           // return;
    }
};

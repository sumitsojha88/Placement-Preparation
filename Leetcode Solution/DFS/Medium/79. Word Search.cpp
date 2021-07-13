

class Solution {
public:
        bool dfs(vector<vector<char>>& board,string word,int i,int j,int curr)
        {
               if(curr==word.size()) return true; 
               int n=board.size();
               int m=board[0].size();
               if(i<0 || i>=n || j<0 || j>=m) return false;
                
                if(board[i][j]==word[curr])
                {
                        char temp = board[i][j];
                        board[i][j] = '0';
                       if(dfs(board,word,i+1,j,curr+1) || dfs(board,word,i-1,j,curr+1) || dfs(board,word,i,j+1,curr+1) || dfs(board,word,i,j-1,curr+1))  return true;
                               
                        board[i][j] = temp;
                }
                
               return false;      
        }
    bool exist(vector<vector<char>>& board, string word) {
            int n=board.size();
            int m=board[0].size();
            int curr=0;
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    {    
                         if(dfs(board,word,i,j,0))
                         {
                                 return true;
                         }
                    }
            }
             return false;   
        
    }
};

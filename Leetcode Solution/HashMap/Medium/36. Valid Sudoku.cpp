

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
            
            vector<unordered_map<char,int>> mpr(9);
            vector<unordered_map<char,int>> mpc(9);
    vector<vector<unordered_map<char,int>>> mat(3,vector<unordered_map<char,int>>(3));
            for(int i=0;i<board.size();i++)
            {
                for(int j=0;j<board[i].size();j++)
                {
                        
                
                        if(board[i][j]=='.') continue;
                        
                        
                        if(mpr[i][board[i][j]])
                                return false;
                        if(mpc[j][board[i][j]]++)
                                return false;
                        if(mat[i/3][j/3][board[i][j]]++>0)
                                return false;
                        
                        mpr[i][board[i][j]]++;
                        mpc[j][board[i][j]]++;
                        mat[i/3][j/3][board[i][j]]++;;  
                        
                        
                }
            }
            
            
        
            
            return true;
        
    }
};

Same as N-Queens  : https://github.com/sumitsojha88/Placement-Preparation/blob/main/Leetcode%20Solution/BackTracking/Hard/51.%20N-Queens.cpp


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
                        if(a[row][c]=='Q') return false;                
                }
                
                int row=r;
                int col=c;
                
                while(row>=0 && col>=0)
                {
                        if(a[row][col]=='Q') return false; 
                        
                        row--;
                        col--;
                }
                
                row=r;
                col=c;
                
                while(row>=0 && col<n)
                {
                        if(a[row][col]=='Q') return false; 
                        
                        row--;
                        col++;
                }
                
                return true;
         
        }
        void backtrack(vector<vector<string>>& ans,vector<string> t,int n,int r)
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
                                backtrack(ans,t,n,r+1);
                                t[r][i] = '.';
                        }
                }
        }
    int totalNQueens(int n) {  
            
            vector<vector<string>> ans;
            vector<string> t(n,string(n,'.'));
            backtrack(ans,t,n,0);
            return ans.size();
        
    }
};

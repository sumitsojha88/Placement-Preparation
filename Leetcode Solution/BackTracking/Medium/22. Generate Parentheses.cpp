
Intuition: Since we are asked to calculate all the possible permutations of brackets , hence we have to use backtracking

Concept: In every backtracking problem , there are two things to keep in mind , which we will explore here as well :

Base Case: Every problem of backtracking has some base case which tells us at which point we have to stop with the recursion process. In our case, when the length of our string has reached the maximum length(n*2), we stop with the recursion for that case and that is our base case.

Conditions: On observing carefully we find that there are two conditions present:

For adding (: If number of opening brackets(open) is less than the the given length(n) i.e.
if max<n, then we can add (,else not.
For adding ): If number of close brackets(close) is less than the opening brackets(open), i.e.
if open<close, we can add ), else not
  

Code:

class Solution {
public:
        void backtrack(string curr,vector<string>& ans,int open,int close,int n)
        {
              if(curr.size()==2*n) 
              {
                      ans.push_back(curr);
                      return ;              
              } 
              if(open<n) backtrack(curr+"(",ans,open+1,close,n);
              if(close<open) backtrack(curr+")",ans,open,close+1,n);   
        }
    vector<string> generateParenthesis(int n) {    
            vector<string> ans;
            string curr="";
            backtrack(curr,ans,0,0,n);
            return ans;
    }
};

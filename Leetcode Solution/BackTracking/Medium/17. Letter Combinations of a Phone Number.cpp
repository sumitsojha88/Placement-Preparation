

Complexity Analysis:  

Time Complexity: O(4n)
where n is a number of digits in the input number. 
Each digit of a number has 3 or 4 alphabets, so it can be said that each digit has 4 alphabets as options.
If there are n digits then there are 4 options for the first digit and for each alphabet of the first digit there are 4 options in the second digit,
i.e for every recursion 4 more recursions are called (if it does not match the base case). So the time complexity is O(4n).
  

Code :
class Solution {
public:
        void backtrack(string d,vector<string> &v,string &curr,vector<string>& ans,int i,int n)
        {
               if(curr.size()==n)
               {
                       ans.push_back(curr);
                       return ;
               }
                string t = v[d[i]-'0'];
                for(int j=0;j<t.size();j++)
                {
                        curr.push_back(t[j]);
                        backtrack(d,v,curr,ans,i+1,n);
                        curr.pop_back();
                }  
        }
    vector<string> letterCombinations(string d) {
            int n=d.size();
            vector<string> v{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            string c;
            vector<string> ans;
            if(n==0) return ans; 
            backtrack(d,v,c,ans,0,n); 
            return ans;
        
    }
};

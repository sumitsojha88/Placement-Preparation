
Expected Time Complexity: O(2n) where n is the length of the string
Expected Space Complexity : O(n * 2n)


Example 1:

Input : str = "abc"
Output: a ab abc ac b bc câ€‹
Explanation : There are 7 substrings that 
can be formed from abc.
Example 2:

Input: str = "aa"
Output: a a aa
Explanation : There are 3 substrings that 
can be formed from aa.


class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		   
		   vector<int> ans;
		   int n=pow(2,s.size());
		   for(int i=0;i<n;i++)
		   {
		       string ns = "";
		       for(int j=0;j<s.size();j++)
		       {
		           if(i&(j<<1))
		           {
		               ns += s[i];
		           }
		       }
		       ans.push_back(ns);
		   }
		   sort(ans.begin(),ans.end());
		}
};

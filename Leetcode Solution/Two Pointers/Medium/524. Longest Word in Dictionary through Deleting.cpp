


Approach:
first we sort the array on the basis of length
now we check for every string of array using two pointer technique`if we can make or not.(we did this part in issub function)
and we will leep on checking till we find longest word












example 1:

Input: s = "abpcplea", dictionary = ["ale","apple","monkey","plea"]
Output: "apple"
Example 2:

Input: s = "abpcplea", dictionary = ["a","b","c"]
Output: "a"
 

Constraints:

1 <= s.length <= 1000
1 <= dictionary.length <= 1000
1 <= dictionary[i].length <= 1000
  
  
  
  class Solution {
public:
        bool issub(string s,string t)
        {
                int i=0;
                int j=0;
                while(i<s.size() && j<t.size())
                {
                        if(s[i]==t[j])
                        {
                                j++;
                        }
                        i++;
                }
                
                
                if(j==t.size())
                        return true;
                else
                       return  false;
        }
 string findLongestWord(string s, vector<string>& d) {
            
            sort(d.begin(),d.end());          
            string ans="";
            int n=d.size();
            for(int i=0;i<n;i++)
            {
                 if(issub(s,d[i]))
                 {
                         if(ans.size()<d[i].size())
                         {
                                 ans = d[i];
                         }
                 }
            }
            
            
            return ans;
    }
};

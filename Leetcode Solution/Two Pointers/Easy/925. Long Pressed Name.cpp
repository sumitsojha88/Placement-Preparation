
Approach:
use two pointer technique





Example 1:

Input: name = "alex", typed = "aaleex"
Output: true
Explanation: 'a' and 'e' in 'alex' were long pressed.
Example 2:

Input: name = "saeed", typed = "ssaaedd"
Output: false
Explanation: 'e' must have been pressed twice, but it wasn't in the typed output.
Example 3:

Input: name = "leelee", typed = "lleeelee"
Output: true
Example 4:

Input: name = "laiden", typed = "laiden"
Output: true
Explanation: It's not necessary to long press any character.
  
  
  
  class Solution {
public:
    bool isLongPressedName(string s, string t) {
        
            int n=s.size();
            int m=t.size();
            int i=0;int j=0;
            while(j<m)
            {
                    if(s[i]==t[j] && i<n)
                    {
                            i++;
                    }
                    else if(j==0 || t[j]!=t[j-1])
                    {
                            return false;
                    }
                    j++;
            }
            
            if(i==n)
                    return true;
            else
                    return false;
    }
};

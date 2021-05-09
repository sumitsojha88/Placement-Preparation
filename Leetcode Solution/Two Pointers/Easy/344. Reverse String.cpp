

Appraoch:
1)we will use two pointer to solve this
2)we will take pointer one from start and one from end
3)now we will swap both pointer and increase start and decrease end pointer.






Example 1:

Input: ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]



class Solution {
public:
    void reverseString(vector<char>& s) {
        
            int n=s.size();
            int i=0;
            int j=n-1;
            while(i<j)
            {
                   
               swap(s[i++],s[j--]);
                   
            }
         
    }
};


  Approach:
 use two pointer technique
 1) in thsi we will check first and last element if they are equal under some condition
 cond:- we need to conider only alphanumeric characters and ignore other
 2) we will check if at s[i] and s[j] characters are alphanumeric or not using function
 Alphanumeric: A character that is either a letter or a number.
 isalnum() function in C programming language checks whether the given character is alphanumeric or not.
 3) if both are alphanumeric than we check if both are equal by coverting in lower cases as in question its given.
 4) if both are not equal than its not  palindrome 



Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
  

  class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
            int j=s.size()-1;
            while(i<j)
            {
                while(i<j && !isalnum(s[i]))
                {
                        i++;
                }
                 while(i<j && !isalnum(s[j]))
                {
                        j--;
                }
                 if(tolower(s[i])!=tolower(s[j]))
                 {
                         return false;
                 }
                    i++;
                    j--;
            }
            return true;
    }
};
  
 

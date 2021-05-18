
Example 1:

Input:N = 3
Output: 4
Explanation:
{1}, {2}, {3} : All single
{1}, {2,3} : 2 and 3 paired but 1 is single.
{1,2}, {3} : 1 and 2 are paired but 3 is single.
{1,3}, {2} : 1 and 3 are paired but 2 is single.
Note that {1,2} and {2,1} are considered same.

Example 2: 

Input: N = 2
Output: 2
Explanation:
{1} , {2} : All single.
{1,2} : 1 and 2 are paired.

Your Task:
You don't need to read input or print anything. Your task is to complete the function countFriendsPairings() which accepts an integer n and return number of ways in which friends can remain single or can be paired up.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 <= N <= 106




const int MOD = 1e9 + 7;

class Solution
{
public:
    int countFriendsPairings(int n) 
    { 
        
        vector<long long int> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++)
        {
            dp[i] = (dp[i-1]%MOD + ((i-1)%MOD)*dp[i-2]%MOD)%MOD ;
        }
        
        
        return dp[n]%MOD;
    }
};    

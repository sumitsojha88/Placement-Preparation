
Example 1:

Input: n = 3, r = 2
Output: 3
Explaination: 3C2 = 3. 

Example 2:

Input: n = 2, r = 4
Output: 0
Explaination: r is greater than n.

Your Task:
You do not need to take input or print anything. Your task is to complete the function nCr() which takes n and r as input parameters and returns nCr modulo 109+7..


Expected Time Complexity: O(n*r)
Expected Auxiliary Space: O(r)


Constraints:
1 ≤ n ≤ 1000
1 ≤ r ≤ 800
  
   long long int tr[1001][1001] = {0};
class Solution{
public:
        
         long long int nCr(int n, int r){
      solve(n,r);
         if(r>n)
            return 0;
        return dp[n][r];        
        
    }
    
   int solve(int n,int r)
   {
       dp[0][0]=1;
       const int M=pow(10,9)+7;
       for(int i=1;i<1001;i++)
       {
           dp[i][0]=1;
           for(int j=1;j<i+1;j++)
           {
               dp[i][j]=(dp[i-1][j-1] + dp[i-1][j]) % M;
           }
       }
       
       return tr[n][r];
       
   }
    
};





Example 1:

Input: N = 4
Output: 5
Explanation:
For numbers from 1 to 4.
For 1: 0 0 1 = 1 set bits
For 2: 0 1 0 = 1 set bits
For 3: 0 1 1 = 2 set bits
For 4: 1 0 0 = 1 set bits
Therefore, the total set bits is 5.
Example 2:

Input: N = 17
Output: 35
Explanation: From numbers 1 to 17(both inclusive), 
the total number of set bits is 35.



Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 108



int countSetBits(int n)
{
   int ans[32];
   int sum=0;
   int count=0;
   for(int i=0;i<32;i++)
   {
       if((n>>i)&1)
       {
       ans[i]=1;
       count++;
       }
       else
       {
           ans[i]=0;
       }
   }
   sum += count;
   for(int i=0;i<32;i++)
   {
       if(ans[i]==1)
       {
           count--;
           if(i==0)
           {
               sum += count;
           }
           else 
           {
               sum += pow(2,i)*count + i*pow(2,i-1);
           }
       }
   }
   
   return sum;
}

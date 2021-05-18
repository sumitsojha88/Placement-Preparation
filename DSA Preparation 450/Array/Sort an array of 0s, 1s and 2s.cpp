
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 <= N <= 10^6
0 <= A[i] <= 2


Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
Example 2:

Input: 
N = 3
arr[] = {0 1 0}
Output:
0 0 1
Explanation:
0s 1s and 2s are segregated 
into ascending order.
  
  
void sort012(int a[], int n)
{
   int l=0;
   int h=n-1;
   int mid=0;
   while(mid<=h)
   {
       switch(a[mid])
       {
           case 0:
           swap(a[l],a[mid]);
           l++; mid++;
           break;
           
           case 1:
           mid++;
           break;
           
           case 2:
           swap(a[mid],a[h]);
           h--;
           break;
       }
   }
  
}

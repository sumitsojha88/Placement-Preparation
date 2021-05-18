

We can do it in O(Logn) time using bitwise operators. The idea is based on the following fact.

  square(n) = 0 if n == 0
  if n is even 
     square(n) = 4*square(n/2) 
  if n is odd
     square(n) = 4*square(floor(n/2)) + 4*floor(n/2) + 1 
    
    
 
 int square(int n)
{
    // Base case
    if (n == 0)
        return 0;
 
    // Handle negative number
    if (n < 0)
        n = -n;
 
    // Get floor(n/2) using right shift
    int x = n >> 1;
 
    // If n is odd
    if (n & 1)
        return ((square(x) << 2) + (x << 2) + 1);
    else // If n is even
        return (square(x) << 2);
}

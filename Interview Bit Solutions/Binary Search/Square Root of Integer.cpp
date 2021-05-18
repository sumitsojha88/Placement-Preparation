
int Solution::sqrt(int A) {
    
    if(A==0 || A==1)
    return A;
    
   long long int start=1;
   long long int end=A/2;
   long long int ans=0;
   long long int mid=0;
   
   while(start<=end)
   {
       mid=(start+end)/2 ;
       
       if(mid*mid == A)
       return mid;
       else if(mid*mid < A)
       {
       start=mid+1;
       ans=mid;
       }
       else
       end=mid-1;
   }
   
   return ans;
}

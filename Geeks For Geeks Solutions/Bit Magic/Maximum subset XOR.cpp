
#define INT_BITS 32
int maxSubarrayXOR(int [], int n);
int main()
{

    int t,n,a[100004],k;
    scanf("%d",&t);
    while(t--)
    {
        //cin>>n;
      scanf("%d",&n);

        for(int i=0;i<n;i++)
            {
            scanf("%d",&a[i]);
            }


   
printf("%d\n",maxSubarrayXOR(a,n));
       // cout<<bin(a,0,n-1,k)<<endl;


    }
}// } Driver Code Ends
// Function to return maximum XOR subset in set[]
int maxSubarrayXOR(int A[], int n)
{
   //Your code here
    int max_el=INT_MIN;
    for( int mark=0;mark<10001;mark++){
          int sum=0;
        for( int i=0;i<n;i++){
            if(mark & (1<<i)) 
            sum=sum^A[i];
        }
        max_el=max(max_el,sum);
    }
    return max_el;
    
    
}

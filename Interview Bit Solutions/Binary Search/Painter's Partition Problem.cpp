

bool isvalid(vector<int> &A,long long int X,int B,int n){
    
    long long int sum=0;
    int cnt=1,i=0;
     for(int i=0;i<n;i++)
     {
         sum = sum + A[i];
         if(sum>X)
         {
             sum = A[i];
             cnt++;
         }
         
         if(cnt>B) return false;
     }
    return true;
}



int Solution::paint(int C, int B, vector<int> &A) {
      
     int n=A.size();
   // if(n<C) return -1;
    
     int sum=0;
     
    int maxi = 0;
    for(int i=0;i<n;i++)
    {
     sum+=A[i]%10000003;
     maxi = max(maxi,A[i])%10000003;
    }
    
    int low=maxi%10000003,high=sum%10000003;
    
    int mid,ans=maxi;
    
    while(low<=high){
        
        mid=low+(high-low)/2;
        
        if(isvalid(A,mid,C,n)){
         ans=mid;
         high=mid-1;
        }
        else
         low=mid+1;
    }
    
    return ans*B%10000003;


}

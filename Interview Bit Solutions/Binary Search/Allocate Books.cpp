

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

int Solution::books(vector<int> &A, int B) {
   
    int n=A.size();
    if(n<B) return -1;
    
     int sum=0;
     
    int maxi = 0;
    for(int i=0;i<n;i++)
    {
     sum+=A[i];
     maxi = max(maxi,A[i]);
    }
    
    int low=maxi,high=sum;
    
    int mid,ans=-1;
    while(low<=high){
        
        mid=low+(high-low)/2;
        
        if(isvalid(A,mid,B,n)){
         ans=mid;
         high=mid-1;
        }
        else
         low=mid+1;
    }
    
    return ans;
}

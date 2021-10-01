vector<vector<int>>dp;
int sol(int e,int f){
    if(f<=1)return f;
    if(e==1)return f;
    if(dp[e][f]!=-1)return dp[e][f];
    int ans=INT_MAX;
    int l=1,h=f;
    while(l<=h){
        int mid=l+(h-l)/2;
        int b=sol(e-1,mid-1);
        int nb=sol(e,f-mid);
        ans=min(ans,1+max(b,nb));
        if(b==nb)break;
        if(b<nb)l=mid+1;
        else
        h=mid-1;
    }
    return dp[e][f]=ans;
}
int Solution::solve(int A, int B) {
  dp=vector<vector<int>>(A+1,vector<int>(B+1,-1));
 return sol(A,B);
}

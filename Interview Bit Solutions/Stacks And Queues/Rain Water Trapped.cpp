

Solution 1 using dp

 int n=A.size();
vector<int> gr(n,0);
vector<int> gl(n,0);
gr[n-1]=-1;
int maxe=A[n-1];
for(int i=n-2;i>=0;i--)
{
if(A[i]<=maxe)
gr[i]=maxe;
else
{
gr[i]=-1;
maxe=A[i];
}
}
maxe=A[0];
gl[0]=-1;
for(int i=0;i<n;i++)
{
gl[i]=(A[i]<=maxe)?maxe:-1;
maxe=(A[i]<=maxe)?maxe:A[i];
}
long long rwt=0;
for(int i=0;i<n;i++)
if(gl[i]!=-1&&gr[i]!=-1)
rwt+=(min(gr[i],gl[i])-A[i]+0LL);
return rwt;



Solution 2 using two pointer

int Solution::trap(const vector<int> &A) {
    
    int n=A.size();
    int l=0;
    int r=n-1;
    int ans=0;
    int leftmax=0,rightmax=0 ;
    while(l<=r)
    {
        if(A[l]<=A[r])
        {
            if(A[l]>leftmax)
            {
             leftmax = A[l];
            }
            else
            {
                ans += leftmax - A[l];
            }
            l++;
        }
        else
        {
           if(A[r]>rightmax)
            {
                rightmax = A[r];
            }
            else
            {
                ans += rightmax - A[r];
            }
            r--;
        }
    }
    return ans;
}

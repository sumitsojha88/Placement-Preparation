
Example 1:

Input:
N = 4
x = 2, y = 1, z = 1
Output: 4
Explanation:Total length is 4, and the cut
lengths are 2, 1 and 1.  We can make
maximum 4 segments each of length 1.
Example 2:

Input:
N = 5
x = 5, y = 3, z = 2
Output: 2
Explanation: Here total length is 5, and
the cut lengths are 5, 3 and 2. We can
make two segments of lengths 3 and 2.
Your Task:
You only need to complete the function maximizeTheCuts() that takes n, x, y, z as parameters and returns max number cuts.

Expected Time Complexity : O(N)
Expected Auxiliary Space: O(N)

Constraints
1 <= N, x, y, z <= 104

#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,x,y,z,i,j;
	    cin>>n;
	    vector<ll> dp(n+2,-1);
	    cin>>x>>y>>z;
	    dp[0]=0;
	    for(int i=1;i<=n;i++)
	    {
	        if((i-x)>=0 && dp[i-x]!=-1)
	        dp[i]=max(dp[i],1+dp[i-x]);
	        if((i-y)>=0 && dp[i-y]!=-1)
	        dp[i]=max(dp[i],1+dp[i-y]);
	        if((i-z)>=0 && dp[i-z]!=-1)
	        dp[i]=max(dp[i],1+dp[i-z]);
	        
	    }
	    
	    cout<<dp[n]<<endl;
	}
	return 0;
}

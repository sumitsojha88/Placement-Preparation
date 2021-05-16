

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	   
	   n=n|(1<<k);
	   
	   cout<<n<<endl;
	    
	}
	return 0;
}

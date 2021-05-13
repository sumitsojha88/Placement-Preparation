


#include<bits/stdc++.h>

using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==0) 
	        a[i] = -1;
	    }
	    int sum=0;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        sum += a[i];
	        if(sum==0)
	        {
	            count++;
	        }
	        if(mp.find(sum)!=mp.end())
	        {
	            count += mp[sum];
	        }
	        
	        mp[sum]++;
	    }
	    
	    cout << count << endl;
	    
	    
	}
	
}

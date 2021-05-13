

#include<bits/stdc++.h>

using namespace std;

#define ll long long 
ll findSubarray(vector<ll> , int );

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        
        cout << findSubarray(arr,n) << "\n";
    }
	return 0;
}// } Driver Code Ends


//User function template for C++

// arr : given array 
// n : size of the given array
ll findSubarray(vector<ll> arr, int n ) {
    
    unordered_map<int,int> mp;
    ll count=0;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
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
    
    
    
    return count;
}

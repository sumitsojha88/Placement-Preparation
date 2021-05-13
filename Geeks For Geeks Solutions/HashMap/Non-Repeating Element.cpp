

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n;
        cin >> n;
        long int arr[n];
        for(long int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        unordered_map<long int,long int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(long int i=0; i<n; i++)
        
    {
        if(m[arr[i]]==1)
        {
            cout << arr[i] << endl;
           break;
        }
    }
    
    }
	return 0;
}

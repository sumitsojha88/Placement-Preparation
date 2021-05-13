

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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            a[i] = a[i] - 1;
        }
        for(int i=0;i<n;i++)
        {
            a[a[i]%n] = a[a[i]%n] + n;
        }
        
        for(int i=0;i<n;i++)
        {
            cout << a[i]/n << " ";
        }
        
        cout << endl;
        
        
    }
	return 0;
}



#include<bits/stdc++.h>

using namespace std;
int main()
 {

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        bool flag = false;
        for(int i=0;i<n-2;i++)
        {
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                if(a[i]+a[l]+a[r]==m)
                {
                    flag = true;
                    break;
  
                }
                else if(a[i]+a[l]+a[r]<m)
                {
                   l++; 
                }
                else
                {
                    r--;
                }
            }
        }
        if(flag)
        cout << 1 << endl;
        else
        cout << 0 << endl;
    }
	return 0;
}

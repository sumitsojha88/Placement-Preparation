

using namespace std;
int main()
 {
	int t,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            int maxdiff=-1e9,min_tillnow, a[n];
            cin>>a[0];
            min_tillnow = a[0];
            for(int i=1;i<n;i++)
            {
                cin>>a[i];
                maxdiff = max(maxdiff,a[i]-min_tillnow);
                min_tillnow = min(min_tillnow,a[i]);
            }
            cout<<maxdiff<<endl;
        }
	return 0;
}

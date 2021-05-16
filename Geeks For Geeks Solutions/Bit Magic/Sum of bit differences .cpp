
#define ll long long int
#define pb push_back
#define  M 1000000007
#define fs for(int i=0;i<s.size();i++)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
ll n;
cin>>n;
 ll a[n];

for(int i=0;i<n;i++)
{
 cin>>a[i];
}
int ans = 0;  // Initialize result 
  
    // traverse over all bits 
    for (int i = 0; i < 32; i++) 
    { 
        // count number of elements with i'th bit set 
        int count = 0; 
        for (int j = 0; j < n; j++) 
            if ( (a[j] & (1 << i)) ) 
                count++; 
  
        // Add "count * (n - count) * 2" to the answer 
        ans += (count * (n - count) * 2); 
    } 


cout << ans << endl;

}
return 0 ;
}


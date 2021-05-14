
using namespace std;
int main() {
//code
int t;
cin >> t;
while(t--)
{
int n , i;
cin >> n;
int a[n];
for(int i=0;i<n;i++) 
{
cin >> a[i];

}
for(int i=0;i<n-1;i++)
{
    if(a[i]>a[i+1])
    cout<<a[i+1]<< " ";
    else
    cout<< "-1" << " "  ;
}
cout << "-1" <<"\n";
}
return 0;
}

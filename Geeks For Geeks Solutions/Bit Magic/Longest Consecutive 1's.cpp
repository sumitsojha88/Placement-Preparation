

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0,max=-1;
        while(n)
        {
            (n&1)?count++:count=0;
            if(count>max)
                max = count;
            n>>=1;
        }
        cout<<max<<endl;
    }
}                                 

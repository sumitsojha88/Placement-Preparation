                         
/* Fore More info Visit www.sumitsojha8.co */
/* Made with love by Sumit Ojha */


#include <bits/stdc++.h>
using namespace std;

#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define lb                lower_bound
#define ub                upper_bound
#define mp                make_pair
#define ff                first
#define ss                second
#define mod               1000000007
#define mpi               unordered_map<int,int> mpi;
#define mps              unordered_map<string,int> mps;
#define mpc               unordered_map<char,int> mpc;
#define yesl              cout << "YES" << endl
#define yess              cout << "yes" << endl
#define nos               cout << "no" << endl
#define nol               cout << "NO" << endl
#define L(i,start,end)    for(lli i=start;i<=end;i++)
#define R(i,start,end)    for(lli i=start;i>=end;i--)
#define ip(n)             cin>>n;lli ar[n+1];L(i,1,n)cin>>ar[i];
#define all(v)            v.begin(),v.end()

typedef long long ll;
typedef long double ld;
typedef vector <int> vi;
typedef vector <bool> vb;
typedef vector <ll> vl;
typedef pair<int, int> pii;


const int MaxN = int(1e6);
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ld pi = 3.1415926535897932384626433832795;


priority_queue <ll> pql;  // maximum upr
priority_queue <pii> pqp;
//big priority queue
priority_queue <ll, vector<ll>, greater<ll> > pqls;  // minimum upr
priority_queue <pii, vector<pii>, greater<pii> > pqps;
//small priority queue
//top pop
 
ll dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
ll dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};
 
int n, p[MaxN];

int ar[MaxN];

/* int nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
int fact(int n) 
{ 
    int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
}  */
/* struct Activity{
   int start,finish,profit;
};

bool compare(Activity s1,Activity s2)
{
    return s1.start < s2.start;
} */
 /* bool SieveOfEratosthenes(long long int n) 
{ 
    
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        
        if (prime[p] == true) 
        {   
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 


    return prime[n];
  
}  */
/* ll gcd(ll x,ll y)
 {
     return y==0?x:gcd(y,x%y);
     } */
/* bool palind(int l,int h,string &s)
        {
                while(l<=h)
                {
                        if(s[l]!=s[h])
                                return false;
                        
                        
                        l++;
                        h--;
                }
                
                
                return true;
        }
        */ 

/* int vowels(string s)
{
    int count=0;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
      {
          count++;
      } 
    }

    return count;
} */


    
 int main()
 {   
     int test;
     
      cin>>test;
     while(test--)
     {
         
          
        
        int n,m;
        cin>>n>>m;
        int a[n][m];
        vector<vector<int>> dp(n ,vector<int> (m,0));

     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
            cin>>a[i][j];
         }
     }


    // cout << a[0][0] << endl;
     for(int j=m-1;j>=0;j--)
     {
         for(int i=0;i<n;i++)
         {
             int r;
             int rt;
             int rd;
             if(j==m-1)
             {
                 r=0;
             }
             else
             {
                 r = dp[i][j+1];
             }

             if(j==m-1 || i==0)
             {
                  rt=0;
             }
             else
             {
                  rt = dp[i-1][j+1];
             }

             if(i==n-1 || j==m-1)
             {
                  rd=0;
             }
             else
             {
                rd= dp[i+1][j+1];
             }

           


             dp[i][j] = a[i][j] + max({r,rt,rd});
   
             
         }

     }

 int ans=dp[0][0];
 for(int i=1;i<n;i++)
 {
     ans = max(ans,dp[i][0]);
 }
     cout << ans << endl;

     }

   
    return 0;
}




#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t; 
    while(t--)
    {
    int n;
    cin>>n;
    long long int i,a[n],b[n]; 
    unordered_map<long long int,int> m;
    
    for(i=0;i<n;i++) {
        cin>>a[i];
        m[a[i]]++;
    }
    
    for(i=0;i<n;i++) {
        cin>>b[i];
        m[b[i]]--;
    }
    
    i=1;
    for(auto it:m){
        if(it.second!=0) {
        i=0; 
        break;
        }
    }
    cout<<i<<endl;
    }
    return 0;
}

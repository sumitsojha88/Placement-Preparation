
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t-->0){
	int n; cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
	  cin>>a[i];
	
	unordered_set<int> set;
	int fibo[1000];
	fibo[0]=0;
	fibo[1]=1;
    set.insert(fibo[0]); 
     set.insert(fibo[1]); 
    
	for(int i=2;i<1000;i++){
	  fibo[i]=fibo[i-1]+fibo[i-2];
	   set.insert(fibo[i]); 
	}
	
	
	for(int i=0;i<n;i++){
	    
	    if(set.find(a[i])!=set.end())
	    cout<<a[i]<<" ";
	}
	cout<<endl;
	
	}
	return 0;
}



#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;

pair <string,int> winner(string arr[],int n);

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        
        pair <string,int> result = winner(arr,n);
        
        cout<<result.first << " " << result.second << endl;
    }
    return 0;
}
// } Driver Code Ends


// Funtion to find winner
// arr[]: input array
// n: size of array

pair <string,int> winner(string arr[],int n)
{
    sort (arr , arr + n);
    int maxv=0;
     unordered_map <string , int> hash;
     for(int i=0;i<n;i++)
     {
         hash[arr[i]]++;
         if(hash[arr[i]] > maxv)
         maxv = hash[arr[i]];
     }
     pair<string,int> p;
     for(int i=0;i<n;i++)
     {
         if(hash[arr[i]]==maxv)
         {
         p.first = arr[i];
         p.second = maxv;
          return p;
         }
     }
     
    
}

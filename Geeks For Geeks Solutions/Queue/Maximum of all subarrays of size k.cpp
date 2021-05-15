

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


vector <int> max_of_subarrays(int *arr, int n, int k){
    
    vector<int> ans;
    deque<int> q;
    for(int i=0;i<k;i++)
    {
        while(!q.empty() && arr[q.back()]<=arr[i])
        q.pop_back();
        
        q.push_back(i);
    }
    for(int i=k;i<n;i++)
    {
        ans.push_back(arr[q.front()]);
        while(!q.empty() && q.front()<=(i-k))
        q.pop_front();
         while(!q.empty() && arr[q.back()]<=arr[i])
        q.pop_back();
        
        q.push_back(i);
    }
    
    ans.push_back(arr[q.front()]);
    return ans;
}


// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    
	    vector <int> res = max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends

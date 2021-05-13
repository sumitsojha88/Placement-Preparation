


vector<int> sortByFreq(int arr[],int n);

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    vector<int> v;
	    v = sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

// } Driver Code Ends


//Complete this function
//Return the sorted array
bool sortbyvalue( pair<int, int> a,  pair<int, int> b)
{
    if(a.second==b.second)
    {
        return (a.first<b.first);
    }
    
    return (a.second>b.second);
}

vector<int> sortByFreq(int arr[],int n)
{
    vector<int> vec2;
    unordered_map<int,int> mp;
    vector<pair<int,int>> vec;
    
    for(int i=0;i<n;i++)
    mp[arr[i]]++;
    
    for(auto it=mp.begin();it!=mp.end();it++)
        vec.push_back(make_pair(it->first, it->second));
 
    
     sort(vec.begin(),vec.end(), sortbyvalue);
    
    
    
    for(int i=0;i<vec.size();i++)
    { 
        while(vec[i].second>0)
        {
            vec2.push_back(vec[i].first);
            vec[i].second--;
            
        }
    }
     
    return vec2;
 
}

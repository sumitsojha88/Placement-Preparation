

using namespace std;
bool alldist(int a,int b,int c,int d){
    if(a==b || a==c || a==d)
        return false;
    if(b==c|| b== d)
        return false;
    if(c==d)
        return false;
    return true;
}
void printVals(int arr[],int n,int sum){
    map<int,vector<pair<int,int> > >mp;
    bool flag = 0;
    int nums = 0;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mp[arr[i]+arr[j]].push_back({i,j});
            v.push_back({i,j});
        }
    }
    set<multiset<int> > s;
    for(pair<int,int> p:v){
        int val = arr[p.first]+arr[p.second];
        for(pair<int,int> k:mp[sum-val]){
            if(alldist(p.first,p.second,k.first,k.second)){
                multiset<int>po;
                po.insert(arr[p.first]);po.insert(arr[p.second]);po.insert(arr[k.first]);po.insert(arr[k.second]);
                flag = 1;
                s.insert(po);
            }
        }
    }
    if(!flag)
        cout<<-1;
    else {
        for(auto i:s){
            for(int j:i)
                cout<<j<<" ";
            cout<<"$";
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        printVals(arr,n,k);
        // cout<<endl;
    }
}

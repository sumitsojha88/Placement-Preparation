

using namespace std;

int xMove[] = {0,0,1,-1};
int yMove[] = {-1,1,0,0};

bool isSafe(int x, int y, int n, int m){
    if(x>=0 && y>=0 && x<n && y<m)
        return true;
    return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int i,n,m,j;
	    cin>>n>>m;
	    queue<pair<pair<int,int>,int>>q;
	    int arr[n][m];
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cin>>arr[i][j];
	            if(arr[i][j])
	                q.push({{i,j},0});
	        }
	    }
	    int dp[n][m];
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            dp[i][j]=-1;
	            if(arr[i][j]==1)
	                dp[i][j]=0;
	        }
	    }
	    while(!q.empty()){
	        pair<pair<int,int>,int>p = q.front();
	        q.pop();
	        int x = p.first.first;
	        int y = p.first.second;
	        int d = p.second;
	        for(i=0;i<4;i++){
	            int X = x+xMove[i];
	            int Y = y+yMove[i];
	            if(isSafe(X,Y,n,m) && dp[X][Y]==-1){
	                dp[X][Y] = d+1;
	                q.push({{X,Y},d+1});
	            }
	        }
	    }
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cout<<dp[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}

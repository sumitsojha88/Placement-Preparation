

#define li long long

int main(){
	int t;
	cin >> t;
	while(t--){
	    li n;
	    cin >> n;
	    li r;
	    int i=0;
	    li result=0;
	    while(i<32){
	        r=n%2;
	        n=n/2;
	        result=(result*2+r);
	        ++i;
	    }
	    cout << result << endl;
	}
	return 0;
}

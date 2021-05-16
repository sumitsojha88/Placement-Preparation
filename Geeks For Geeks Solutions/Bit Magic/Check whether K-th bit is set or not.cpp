
using namespace std;

int main() {
int t;
cin >> t;
while(t--) {
long n, k;
cin >> n >> k;
n = n >> k;
if(n%2 == 1) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}

}
return 0;
}

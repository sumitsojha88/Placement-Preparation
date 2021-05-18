Example 1:

Input:
A = "geeks", B = "geeksfor", 
C = "geeksforgeeks"
Output: 5
Explanation: "geeks"is the longest common
subsequence with length 5.
â€‹Example 2:

Input: 
A = "abcd", B = "efgh", C = "ijkl"
Output: 0
Explanation: There's no common subsequence
in all the strings.

Your Task:
You don't need to read input or print anything. Your task is to complete the function LCSof3() which takes the strings A, B, C and their lengths n1, n2, n3 as input and returns the length of the longest common subsequence in all the 3 strings.


Expected Time Complexity: O(n1*n2*n3).
Expected Auxiliary Space: O(n1*n2*n3).


Constraints:
1<=n1, n2, n3<=100
  
  
  using namespace std;

int solve(string s1, string s2, string s3){
    int dp[101][101][101];
    memset(dp,0,sizeof dp);
    int m = s1.length();
    int n = s2.length();
    int o = s3.length();
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=o;k++){
                if(s1[i-1]==s2[j-1] and s1[i-1]==s3[k-1]){
                    dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
                    continue;
                }
                dp[i][j][k] = max(max(dp[i-1][j][k],dp[i][j-1][k]),dp[i][j][k-1]);
            }
        }
    }
    return dp[m][n][o];
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n,o;
	    cin>>m>>n>>o;
	    string s1,s2,s3;
	    cin>>s1>>s2>>s3;
	    cout<<solve(s1,s2,s3)<<endl;
	}
	return 0;
}

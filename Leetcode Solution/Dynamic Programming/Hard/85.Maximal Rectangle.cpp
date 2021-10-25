class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int n = matrix.size();
        if(n==0)
            return 0;
        int m = matrix[0].size();
        vector<int>dp(m+1,0);
        int mx=0;
        for(int i=0;i<n;i++){
            
            
            
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1')
                    dp[j]++;
                else dp[j]=0;
            }
            // for(auto x:dp)
            //     cout<<x<<" ";
            // cout<<endl;
            
            stack<int>st;
            int ans=0;
            for(int j=0;j<=m;j++){
                while(!st.empty()&&dp[st.top()]>=dp[j]){
                    int h = dp[st.top()];
                    st.pop();
                    int w = st.empty()?j:j-st.top()-1;
                    ans = max(ans,w*h);
                }
                st.push(j);
            }
            mx = max(mx,ans);
            
        }
        return mx;
    }
};
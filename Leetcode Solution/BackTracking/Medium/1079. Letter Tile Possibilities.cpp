
class Solution {
public:
        void backtrack(string t,int& ans,int n,int i)
        {
                ans++;
                for(int j=i;j<n;j++)
                {
                        if(i!=j && t[i]==t[j])
                        {
                                continue;
                        }
                     swap(t[i],t[j]);
                    backtrack(t,ans,n,i+1);  
                }   
                return;
        }
    int numTilePossibilities(string t) {
            sort(t.begin(),t.end());
            int n=t.size();
            int ans=0;
            backtrack(t,ans,n,0);
            return ans-1;     
    }
};

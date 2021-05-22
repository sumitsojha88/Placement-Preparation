
class Solution {
public:
    int minOperations(vector<int>& a) {
            
            int ans=0;
            for(int i=0;i<a.size()-1;i++)
            {
                    if(a[i+1]<=a[i])
                    {
                            ans += a[i]-a[i+1]+1;
                            a[i+1] += a[i]-a[i+1]+1;
                            
                    }
            }
        return ans;
    }
};

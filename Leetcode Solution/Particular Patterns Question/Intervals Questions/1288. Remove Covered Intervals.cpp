
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& a) {
            
            sort(a.begin(),a.end());
            int ans=1;
            int l=a[0][0];
            int r=a[0][1];
            for(int i=1;i<a.size();i++)
            {
                    if(a[i][0]>l && a[i][1]>r)
                    {
                            ans++;
                            l = a[i][0];
                    }
                    

                    r = max(r,a[i][1]);
            }
            
            return ans;
            
        
    }
};

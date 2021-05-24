
class Solution {
public:
        static bool compare(vector<int> &b,vector<int> &c)
        {
                return b[1]<c[1];
        }
    int eraseOverlapIntervals(vector<vector<int>>& a) {
            
            sort(a.begin(),a.end(),compare);
            
            int prev=0;
            int ans=0;
            for(int i=1;i<a.size();i++)
            {
                    if(a[prev][1]>a[i][0])
                    {
                            ans++;
                    }
                    else
                    {
                            prev = i;
                    }
            }
            
            
            return ans;
        
    }
};

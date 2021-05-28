
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& a, int b) {
            int n=a.size();
            vector<bool> ans;
            int maxi=0;
            for(int i=0;i<n;i++)
            {
                    maxi = max(maxi,a[i]);
            }
            for(int i=0;i<n;i++)
            {
                  if(a[i]+b>=maxi)
                  {
                          ans.push_back(true);
                  }
                    else
                    {
                          ans.push_back(false);  
                    }
            }
            
            
            return ans;
    }
};

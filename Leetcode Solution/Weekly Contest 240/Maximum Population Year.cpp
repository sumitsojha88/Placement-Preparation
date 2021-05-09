
Question link : https://leetcode.com/problems/maximum-population-year/


class Solution {
public:
    int maximumPopulation(vector<vector<int>>& a) {
            
            unordered_map<int,int> mp;
            sort(a.begin(),a.end());
            for(int i=0;i<a.size();i++)
            {
                 for(int j=a[i][0];j<a[i][1];j++)
                 {
                         mp[j]++;
                 }
            }
            
            int maxi=0;
            int ans = 0;
            for(int i=a[i][0];i<a[a.size()-1][1];i++)
            {
                    if(maxi<mp[i])
                    {
                            maxi = mp[i];
                            ans = i;
                            
                    }
            }
        
            return ans;
    }
};

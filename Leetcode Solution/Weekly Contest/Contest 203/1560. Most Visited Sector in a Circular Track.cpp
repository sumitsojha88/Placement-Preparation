
class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& a) {
            
            vector<int> ans;
            unordered_map<int,int> mp;
            int m=a.size();
            
            for(int i=0;i<m-1;i++)
            {
                    if(a[i+1]>a[i])
                    {
                            if(i==0)
                            {
                                  for(int j=a[i];j<=a[i+1];j++)
                            {
                                    mp[j]++;
                            }  
                            }
                            else
                            {
                            for(int j=a[i]+1;j<=a[i+1];j++)
                            {
                                    mp[j]++;
                            }
                            }
                    }
                    else
                    {
                            if(i==0)
                            {
                                  for(int j=a[i];j<=n;j++)
                            {
                                    mp[j]++;
                            }  
                            for(int j=1;j<=a[i+1];j++)
                            {
                                    mp[j]++;
                            }   
                            }
                            else
                            {
                            for(int j=a[i]+1;j<=n;j++)
                            {
                                    mp[j]++;
                            }  
                            for(int j=1;j<=a[i+1];j++)
                            {
                                    mp[j]++;
                            }
                            }
                    }
            }
            
            int maxi=0;
            for(auto i:mp)
            {
                    maxi = max(maxi,i.second);
            }
             for(int i=1;i<=n;i++)
             {
                     if(mp[i]==maxi)
                     {
                             ans.push_back(i);
                     }
             }
          //  reverse(ans.begin(),ans.end());
            return ans;
            
            
        
    }
};

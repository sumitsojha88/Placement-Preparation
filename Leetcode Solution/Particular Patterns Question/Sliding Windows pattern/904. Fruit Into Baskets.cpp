
class Solution {
public:
    int totalFruit(vector<int>& t) {
            
            int n=t.size();
            int j=0;
            int ans=0;
            int count=0;
            unordered_map<int,int> mp;
            for(int i=0;i<t.size();i++)
            {
                    mp[t[i]]++;
                    
                    while(mp.size()>2 && j<n)
                    {
                       mp[t[j]]--;
                            if(mp[t[j]]==0)
                            {
                                    mp.erase(t[j]);
                            }
                       j++;
                    }
                    
                    
                    ans = max(ans,i-j+1);
            }
            
            return ans;
        
    }
};

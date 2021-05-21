

class Solution {
public:
    string reorganizeString(string s) {
            
            
            priority_queue<pair<int,char>> pq;
            unordered_map<char,int> mp;
            for(int i=0;i<s.size();i++)
            {
                    mp[s[i]]++;
            }
            
            for(auto &i:mp)
            {
                    pq.push({i.second,i.first});
            }
            
            
            string ans="";
            while(pq.size()>1)
            {
                    char h = pq.top().second;
                    pq.pop();
                    char sh = pq.top().second;
                    pq.pop();
                    ans += h;
                    ans += sh;
                    if(mp[h]>1)
                    {
                            mp[h] -= 1;
                            pq.push({mp[h],h});
                    }
                    
                    if(mp[sh]>1)
                    {
                            mp[sh] -=1;
                            pq.push({mp[sh],sh});
                    }
                    
            }
            
            
            while(pq.size())
            {
                    char lc = pq.top().second;
                    pq.pop();
                    if(mp[lc]>1) return "";
                    else
                    ans += lc;
                    
            }
            
            
            return ans;
        
    }
};

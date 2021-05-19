

class Solution {
public:
    string frequencySort(string s) {
            
            priority_queue<pair<int,char>> pq;
            unordered_map<char,int> mp;
            for(int i=0;i<s.size();i++)
            {
                    mp[s[i]]++;
            }
            for(auto &i: mp)
            {
                    pq.push({i.second,i.first});
            }
            string ans="";
            while(pq.size())
            {
                    pair<int,char> p = pq.top();
                    pq.pop();
                    int t=p.first;
                    while(t--)
                    {
                            ans += p.second;
                    }
            }
            
            return ans;
            
            
        
    }
};

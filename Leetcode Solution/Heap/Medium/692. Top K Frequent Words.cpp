
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
            
            
            priority_queue<pair<int,string>> pq;
            vector<string> ans;
            unordered_map<string,int> mp;
            
            for(int i=0;i<words.size();i++)
            {
                    mp[words[i]]++;
            }
            
            for(auto i: mp)
            {
                    pq.push({-i.second,i.first});
                    
                    while(pq.size()>k)
                    {
                            pq.pop();
                    }
            }
            
            while(pq.size())
            {
                    pair<int,string> p = pq.top();
                    pq.pop();
                    ans.push_back(p.second);
            }
            
             reverse (ans.begin(),ans.end());
            
            return ans; 
            
        
            
            
        
    }
};

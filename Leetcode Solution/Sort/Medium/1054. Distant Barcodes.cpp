

Question Link: https://leetcode.com/problems/distant-barcodes/

Solution: 

class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& b) {
            
            unordered_map<int,int> mp;
            priority_queue<pair<int,int>> pq;
            for(int i=0;i<b.size();i++)
            {
                    mp[b[i]]++;
            }
            
            for(auto i: mp)
            {
                    pq.push({i.second,i.first});
            }
            
            vector<int> ans;
            while(pq.size()>1)
            {
                    int h=pq.top().second;
                    pq.pop();
                    int sh = pq.top().second;
                    pq.pop();
                    ans.push_back(h);
                    ans.push_back(sh);
                    
                    if(mp[h]>1)
                    {
                            mp[h]--;
                            pq.push({mp[h],h});
                    }
                    if(mp[sh]>1)
                    {
                            mp[sh]--;
                            pq.push({mp[sh],sh});
                    }
            }
            
            while(pq.size())
            {
                    int th = pq.top().second;
                    pq.pop();
                    ans.push_back(th);
            }
            
            
            return ans;
            
            
        
    }
};

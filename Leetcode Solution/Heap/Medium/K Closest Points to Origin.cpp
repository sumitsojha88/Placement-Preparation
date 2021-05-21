

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
            
           priority_queue <pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>> > pq;
            vector<vector<int>> ans;
            
            for(int i=0;i<p.size();i++)
            {
                    int d = p[i][0]*p[i][0] + p[i][1]*p[i][1];
                    pq.push({d,{p[i][0],p[i][1]}});
                    
                   
            }
            
            
            
            while(k--)
            {
                    vector<int> temp;
                   temp.push_back(pq.top().second.first);
                    temp.push_back(pq.top().second.second);
                    
                    
                    ans.push_back(temp);
                    
                    pq.pop();
                    
                 //   temp.empty();
                    
            }
            
            
            return ans;
            
        
    }
};

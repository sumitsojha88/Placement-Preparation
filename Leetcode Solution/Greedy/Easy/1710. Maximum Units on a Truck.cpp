class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
            
            priority_queue<pair<int,int>> pq;
            int n=boxTypes.size();
            for(int i=0;i<n;i++)
            {
                   pq.push({boxTypes[i][1],boxTypes[i][0]}); 
            }
            int ans=0;
            while(truckSize && pq.size())
            {
                 pair<int,int> t = pq.top();
                    pq.pop();
                    
                    if(t.second>=truckSize)
                    {
                            ans += t.first*truckSize;
                            truckSize  = 0;
                    }
                    else
                    {
                            ans += t.first*t.second;
                            truckSize -= t.second; 
                    }
            }
            
            
            return ans;
        
    }
};

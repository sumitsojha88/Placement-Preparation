

class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
            
            priority_queue<int> pq;
            int n=s.size();
            for(int i=0;i<n;i++)
            {
                    pq.push(s[i]);
            }
            while(pq.size()>0 && pq.size()!=1)
            {
                  int ft = pq.top();
                    pq.pop();
                    int st = pq.top();
                    pq.pop();
                    if(ft!=st)
                    {
                            pq.push(abs(ft-st));
                    }
                            
            }
        
            
            if(pq.size()==0)
                    return 0;
            else
                    return pq.top();
    }
};

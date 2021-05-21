
class Solution {
public:
    int maximumScore(int a, int b, int c) {
            
            priority_queue<int> pq;
            pq.push(a);
            pq.push(b);
            pq.push(c);
            int ans=0;
            while(pq.size()>1)
            {
                    int ft = pq.top();
                    pq.pop();
                    int st = pq.top();
                    pq.pop();
                    ans++;
                    if(ft>1)
                    pq.push(ft-1);
                    if(st>1)
                    pq.push(st-1);
            }
            
            return ans;
        
    }
};

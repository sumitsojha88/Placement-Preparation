
class Solution {
public:
    int furthestBuilding(vector<int>& a, int b, int l) {
        
            int n = a.size();
            priority_queue<int,vector<int>,greater<int>> pq;
           for(int i=0;i<a.size()-1;i++)
           {
              if(a[i+1]>a[i]) 
              {
                int diff = a[i+1]-a[i];
                 pq.push(diff);
              }
                      
               if(pq.size()>l)
               {
                       int t = pq.top();
                       pq.pop();
                       
                       b = b - t;
                       
                       if(b<0)
                       {
                               return i;
                       }
               }
                           
           }
            
            
            
            return n-1;
            
            
    }
};


Question link: https://leetcode.com/problems/maximum-performance-of-a-team/


Example 1:

Input: n = 6, speed = [2,10,3,1,5,8], efficiency = [5,4,3,9,7,2], k = 2
Output: 60
Explanation: 
We have the maximum performance of the team by selecting engineer 2 (with speed=10 and efficiency=4) and engineer 5 (with speed=5 and efficiency=7). That is, performance = (10 + 5) * min(4, 7) = 60.
Example 2:

Input: n = 6, speed = [2,10,3,1,5,8], efficiency = [5,4,3,9,7,2], k = 3
Output: 68
Explanation:
This is the same example as the first but k = 3. We can select engineer 1, engineer 2 and engineer 5 to get the maximum performance of the team. That is, performance = (2 + 10 + 5) * min(5, 4, 7) = 68.
Example 3:

Input: n = 6, speed = [2,10,3,1,5,8], efficiency = [5,4,3,9,7,2], k = 4
Output: 72
  
  
  
  class Solution {
public:
    int maxPerformance(int n, vector<int>& s, vector<int>& e, int k) {
            
            vector<pair<int,int>> v;
            for(int i=0;i<n;i++)
            {
                    v.push_back({e[i],s[i]});
            }
            
            sort(v.rbegin(),v.rend());
            
          //  return v[0].first;
            
            priority_queue<int,vector<int>,greater<int>> pq;
            
          long long int  sum =0;
          long long  int ans=0;
            for(int i=0;i<v.size();i++)
            {
                    pq.push(v[i].second);
                    sum += v[i].second;
                   
                    
                    while(pq.size()>k)
                    {
                            sum -= pq.top();
                            pq.pop();
                    }
                    
                    
                    
                    ans = max(ans,sum*(v[i].first));
                    
                  
            }
            
            
            return ans%(int)(1e9+7);
        
    }
};

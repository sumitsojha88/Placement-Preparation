
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& b) {
        
            sort(a.begin(),a.end());
            vector<vector<int>> ans;
            
            int i=0;
            int s=b[0];
            int e=b[1];
            while(i<a.size() && a[i][1]<b[0])
            {
                    ans.push_back(a[i]);
                    i++;
            }
            
            while(i<a.size() && a[i][0]<=e)
            {
                    s = min(s,a[i][0]);
                    e = max(e,a[i][1]);
                    i++;
                
            }
            
            ans.push_back({s,e});
            
            
            while(i<a.size())
            {
                    ans.push_back(a[i]);
                    i++;
            }
            
            return ans;
                 
            
    }
};

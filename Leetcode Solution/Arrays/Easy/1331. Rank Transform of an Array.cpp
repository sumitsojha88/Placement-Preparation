
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
            
          unordered_map<int,int> mp;
          vector<int> a=arr;
            int n=arr.size();
            sort(a.begin(),a.end());
           vector<int> ans;
            int j=1;
            for(int i=0;i<arr.size();i++)
            {
                    if(mp.find(a[i])==mp.end())
                    mp[a[i]] = j++;
                 //   else if(mp.find(a[i])!=mp.end())
                  //          j++;
                   
                    
                //  j++;
                   
                    
            }
             for(int i=0;i<arr.size();i++)
            {
                   ans.push_back(mp[arr[i]]);
                    
            }
            
            
            return ans;
    }
};

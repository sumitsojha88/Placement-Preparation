
class Solution {
public:
    int findLucky(vector<int>& arr) {
            
            unordered_map<int,int> mp;
            sort(arr.begin(),arr.end());
            for(int i=0;i<arr.size();i++)
            {
                    mp[arr[i]]++;
            }
            int ans=-1;
            for(int i=0;i<arr.size();i++)
            {
                    if(mp[arr[i]]==arr[i])
                          ans = arr[i];
            }
           
            return ans;
        
    }
};

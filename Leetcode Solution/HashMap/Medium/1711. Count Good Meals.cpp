

class Solution {
public:
    int countPairs(vector<int>& d) {
           
          unordered_map<int,int> mp;
        long long ans=0;
        for(int x : d){
            for(int i=1;i<=(1<<22);i*=2){
                if(mp.count(i-x)) 
                        ans+=mp[i-x];
            }
            mp[x]++;
        }
        return ans % (int)(1e9 + 7);   
            
    }
};

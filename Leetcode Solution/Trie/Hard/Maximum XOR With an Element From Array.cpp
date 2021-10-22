class Solution {
public:
    struct trie{
      struct trie *ar[2];
      trie(){
          memset(ar, 0, sizeof ar);
      }
    };
    trie *root=new trie;
    int mxxor(int n){
        trie *cr=root;
        int tmpans=0;
        for(int i=31;i>=0;i--){
            int pr=(n>>i)&1;
            if(pr){
                if(cr->ar[0]){
                    cr=cr->ar[0];
                    tmpans+=pow(2,i);
                }
                else cr=cr->ar[1];
            }
            else{
                if(cr->ar[1]){
                    cr=cr->ar[1];
                    tmpans+=pow(2,i);
                }
                else cr=cr->ar[0];
            }
        }
        return tmpans;
    }

    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        sort(begin(nums), end(nums));
        int m=queries.size(), n=nums.size();
        for(int i = 0; i < m; i++) {
            queries[i].push_back(i);
        }
        sort(begin(queries), end(queries), [](vector<int>&a, vector<int>&b){
            return a[1]<b[1];
        });

        int idx=0;
        vector<int>xorr(m,-1);
        for(int i=0;i<m;i++){
            while(idx < n && nums[idx] <= queries[i][1]) {
                trie *cr=root;
                for(int b=31;b>=0;b--){
                    int pr=(nums[idx]>>b)&1;
                    if(pr){
                        if(!cr->ar[1])
                            cr->ar[1]=new trie;
                        cr=cr->ar[1];
                    }
                    else{
                        if(!cr->ar[0])
                            cr->ar[0]=new trie;
                        cr=cr->ar[0];
                    }
                }
                idx++;
            }
            if(idx > 0) {
                xorr[queries[i][2]] = mxxor(queries[i][0]);
            }
        }


        return xorr;
    }
};

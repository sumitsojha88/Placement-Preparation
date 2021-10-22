class Solution {
public:
    struct trie{
       trie *ar[2];
      trie(){
          memset(ar, 0, sizeof ar);
      }
    };

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
    trie *root=new trie;
    int findMaximumXOR(vector<int>& nums) {

        for(int i:nums){
            trie *cr=root;
            for(int b=31;b>=0;b--){
                int pr=(i>>b)&1;
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
        }

        int ans=INT_MIN;
        for(int i:nums){
            ans=max(ans, mxxor(i));
        }
        return ans;
    }
};

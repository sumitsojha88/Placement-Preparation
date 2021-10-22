class Solution {
public:
    struct trie{
        trie* ar[26];
        vector<int>pal;
        int isend;
        trie(){
            memset(ar, 0, sizeof ar);
            pal.clear();
            isend=-1;
        }
    };
    trie* root = new trie;

    bool plndrm(int i, int j, string s){
        while(i<j){
            if(s[i]!=s[j])return 0;
            i++;j--;
        }
        return 1;
    }
    void insert(string s, int idx){
        trie* cr=root;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(!cr->ar[s[i]-'a'])
                cr->ar[s[i]-'a']=new trie;
            if(plndrm(0,i,s))cr->pal.push_back(idx);
            cr=cr->ar[s[i]-'a'];
        }
        cr->pal.push_back(idx);
        cr->isend=idx;
    }

    void search(string s, int idx, vector<vector<int>>&ans){
        trie* cr=root;
        int n=s.size();
        for(int i=0;i<n and cr;i++){
            if(cr->isend>=0 and cr->isend != idx and plndrm(i,n-1,s))ans.push_back({idx, cr->isend});
            cr=cr->ar[s[i]-'a'];
        }
        if(cr){
            for (int i : cr -> pal) {
                if (i != idx) {
                    ans.push_back({idx, i});
                }
            }
        }

    }

    vector<vector<int>> palindromePairs(vector<string>& words) {
        int idx=0;
        int n=words.size();
        for(string s:words){
            insert(s,idx++);
        }
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            search(words[i],i,ans);
        }
        return ans;
    }
};

class Solution {
public:
    struct trie{
        bool end;
        trie* child[26];
        trie(){
            end=0;
            memset(child, 0, sizeof child);
        }
    };
    trie *root = new trie();

    void insert(string s){
        trie *cr=root;
        for(char c:s){
            if(!cr->child[c-'a'])
                cr->child[c-'a']=new trie();
            cr=cr->child[c-'a'];
        }
        cr->end=1;
    }

    void dfs(trie* cr, string s,vector<string>&tmp){
        if(tmp.size()==3)return ;
        if(cr->end)tmp.push_back(s);
        for(int i=0;i<26;i++)
            if(cr->child[i])
                dfs(cr->child[i], s+(char)('a'+i), tmp);

    }
    vector<string> search(string s){
        trie* cr= root;
        vector<string>tmp;
        for(char c:s){
            if(cr->child[c-'a'])
                cr=cr->child[c-'a'];
            else return tmp;
        }
       dfs(cr, s, tmp);
        return tmp;
    }

    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        for(string s:products){
            insert(s);
        }
         vector<vector<string>>ans;
        string x;
         for(char c:searchWord){
             x.push_back(c);
             auto tmp=search(x);
             ans.push_back(tmp);
         }
        return ans;
    }
};

struct trie{
    trie* ar[2];
    trie(){
        memset(ar, 0, sizeof ar);
    }
};
trie* root;

void insert(int num){
    trie* cr = root;
    for(int i = 31; i >= 0; i--){
        int bit = 1&(num>>i);
        if(!cr->ar[bit])
           cr->ar[bit] = new trie;
        cr = cr->ar[bit];
    }
}
int getMaxXor(int num){
    trie* cr = root;
    int ans = 0;
    for(int i = 31; i >= 0; i--){
        int bit = 1&(num>>i);
        if(bit == 1){
            if(cr->ar[0]){
               cr = cr->ar[0];
               ans += (1<<i);
            }
            else cr = cr->ar[1];
        }
        else{
            if(cr->ar[1]){
               cr = cr->ar[1];
               ans += (1<<i);
            }
            else cr = cr->ar[0];
        }
    }
    return ans;
}
int Solution::solve(vector<int> &A, vector<int> &B) {
    root = new trie();
    for(int &i : A) insert(i);
    int ans = 0;
    for(int &i : B) ans = max(ans, getMaxXor(i));
    return ans;
}



vector<int> Solution::primesum(int n) {
    
       vector<bool> isprime(n+1);
   
    for(int i=0;i<=n;i++)
     isprime[i]=1;
    isprime[0]=0;
    isprime[1]=0;
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=i*2;j<=n;j+=i)
             isprime[j]=0;
        }
    }
    vector<int>ans(2);
    for(int i=2;i<=n/2;i++){
        if(isprime[i]&&isprime[n-i]){
            ans[0]=i;
            ans[1]=n-i;
            return ans;
        }
    }
}

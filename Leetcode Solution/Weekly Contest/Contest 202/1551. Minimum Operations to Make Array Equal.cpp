
lass Solution {
public:
    int minOperations(int n) {
            
            int ans=0;
            int t =0;
            if(n%2)
             t = 2*(n/2)+1;
            else
             t = (2*((n-1)/2)+1 + 2*((n+1)/2)+1)/2;
            // return t;
            for(int i=0;i<n/2;i++)
            {
                    ans += t - (2*i+1);
            }
            
            return ans;
    }
};

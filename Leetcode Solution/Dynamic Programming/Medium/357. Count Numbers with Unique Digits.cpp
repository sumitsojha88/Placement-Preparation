class Solution {
public:
    int cal(int n){
        int val =9,dif=9;
        while(n>1){
            dif*=val;
            val--;
            n--;
        }
        return dif; 
    }
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)
            return 1;
        int ans = 10;
        for(int i=2;i<=n;i++)
            ans+=cal(i);
        return ans;
    }
};
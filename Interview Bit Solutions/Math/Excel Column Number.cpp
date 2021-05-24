
int Solution::titleToNumber(string A) {
    int sum=0;
    for(int i=0;i<A.size();i++)
    {
        sum+=(A[i]-'A'+1)*pow(26,A.size()-i-1);
    }
    return sum;
}

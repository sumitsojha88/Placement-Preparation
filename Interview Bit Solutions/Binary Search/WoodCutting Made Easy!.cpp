int wood(vector<int> &A, int h, int n){
    long long result=0;
    for(int i=n-1; i>=0; i--){
        if(max(0, A[i]-h))  result += max(0, A[i]-h);
    }
    return result;
}

int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int n=A.size();
    
    long long sum=0;
    for(auto x:A)   sum+=x;
    
    int left=0, right=A[n-1];
    
    while(left<=right){
        int mid=left+(right-left/2);
        int k=wood(A, mid, n);
        
        if(k==B)  return mid;
        else if(k<B)    right=mid-1;
        else    left=mid+1;
    }
    
    return right;
}

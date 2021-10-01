int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int left=0, right=n-1;
    
    if(A[right]<=B) return n;
    
    while(left <= right){
        int mid = left + (right-left)/2;
        // cout<<mid<<" ";
        
        if(A[mid]<=B && A[mid+1]>B) return mid+1;
        else if(A[mid] > B)  right = mid-1;
        else if(A[mid]<=B)  left=mid+1;
    }
    
    return 0;
}

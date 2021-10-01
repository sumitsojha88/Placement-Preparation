int Solution::searchInsert(vector<int> &A, int B) {
    int n=A.size();
    int left=0, right=n-1;
    
    if(A[0]>B) return 0;
    if(A[n-1]<B)    return n;
    
    while(left<=right){
        int mid=left+((right-left)/2);
        
        if(A[mid]==B || (A[mid]>B && A[mid-1]<B))   return mid;
        else if(A[mid]>B)  right=mid-1;
        else left=mid+1;
    }
    
    return left;
}
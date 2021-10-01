int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n=A.size(), m=A[0].size();
    
    for(int i=0; i<n; i++){
        if(A[i][0]<=B && A[i][m-1]>=B){
            int left=0, right=m-1;
            while(left<=right){
                int mid=left+(right-left/2);
                if(A[i][mid]==B)    return 1;
                else if(A[i][mid]>B)    right=mid-1;
                else left=mid+1;
            }
            
            break;
        }
    }
    
    return 0;
}
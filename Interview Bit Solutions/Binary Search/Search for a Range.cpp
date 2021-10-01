vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n=A.size();
    int left=0, right=n-1, mid=left+(right-left/2);
    
    int lhs=-1, rhs=-1;
    while(left <= right){        
        if(A[mid]==B){
            if(mid==0 || A[mid-1]!=A[mid]){
                lhs=mid;
                goto first;
            }
            
            lhs=mid;
            mid--;
            continue;
        }else if(A[mid]>B)  right=mid-1;
        else    left=mid+1;

        mid=left+(right-left/2);
    }
    
    
    first: left=0, right=n-1;
    mid=left+(right-left/2);

    while(left <= right){ 
        if(A[mid]==B){
            if(mid==n-1 || A[mid+1]!=A[mid]){
                rhs=mid;
                goto second;
            }
            
            rhs=mid;
            mid++;
            continue;
        }else if(A[mid]>B)  right=mid-1;
        else    left=mid+1;

        mid=left+(right-left/2);
    }
    
    second: return {lhs, rhs};
}
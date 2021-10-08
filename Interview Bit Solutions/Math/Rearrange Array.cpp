//link of the problem (https://www.interviewbit.com/problems/rearrange-array/)
void Solution::arrange(vector<int> &A) {
    int n=A.size();  
    for(int i=0;i<n;i++){
        A[i]=A[i]+(A[A[i]]%n)*n;
    }
    for(int i=0;i<n;i++)
     A[i]=A[i]/n;
}

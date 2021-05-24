

int Solution::isPower(int A) {
   if(A==1)
return(1);
for(int i=2;i<=sqrt(A);i++){
int n=A;
while(n%i==0){
n=n/i;
}
if(n==1){
return(1);
}
}
return(0);

}

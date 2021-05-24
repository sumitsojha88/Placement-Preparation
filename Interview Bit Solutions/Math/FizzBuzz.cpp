
vector<string> Solution::fizzBuzz(int A) {
    int n=A;
    for(int i=0;i<n;i++)
    
    if(n%3==0 && n%5 ==0 )
    cout << "FizzBuzz" ;
   else if(n%3 == 0)
    cout << "Fizz" ;
   else if(n%5 == 0)
    cout << "Buzz" ;
    else
    cout << i ;
    
    
    return  ;
}

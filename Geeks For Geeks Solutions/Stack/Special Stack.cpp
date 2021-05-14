

#include<iostream>
#include<stack>
using namespace std;
void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty()){
		    pop();
		}
		while(!isFull(n)){
			cin>>a;
			push(a);
		}
		cout<<getMin()<<endl;
	}
}// } Driver Code Ends

#include<limits.h>
/*Complete the function(s) below*/
void push(int a)
{
    s.push(a);
     //add code here.
}

bool isFull(int n)
{ if(s.size()==n)
         return 1;
     return 0;
     //add code here.
}

bool isEmpty()
{if(s.empty())
        return 1;
    return 0;
    //add code here.
}

int pop()
{
    s.pop();
    //add code here.
}

int getMin()
{
    int min=INT_MAX;
   while(!s.empty()){
       if(s.top()<min)
           min=s.top();
       s.pop();
    }
   return min;
   //add code here.
}

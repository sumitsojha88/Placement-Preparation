
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends
/*The structure of the class is
class SortedStack{
public:
 stack<int> s1;
   int t;
   while(!s.empty()){
       t = s.top();
       s.pop();
       if(s1.empty()){
           s1.push(t);
       }else if(t<s1.top()){
           s1.push(t);
       }else{
           int x;
           while(!s1.empty()&&s1.top()<t){
               x = s1.top();
               s1.pop();
               s.push(x);
           }
           s1.push(t);
       }
   }
   while(!s1.empty()){
       s.push(s1.top());
       s1.pop();
   }
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   int t;
   stack<int> st;
   while(!s.empty())
   {
       t = s.top();
       s.pop();
       if(st.empty())
       st.push(t);
       else if(t<st.top())
       st.push(t);
       else
       {
           int x;
           while(!st.empty() && t>st.top())
           {
               x = st.top();
               st.pop();
               s.push(x);
           }
           st.push(t);
       }
   }
   while(!st.empty())
   {
       s.push(st.top());
       st.pop();
   }
  
}

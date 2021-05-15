

#include<bits/stdc++.h>

using namespace std;

class StackQueue{
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int B);
    int pop();

};
int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        StackQueue *sq = new StackQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }


}
// } Driver Code Ends


/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

/* The method push to push element into the queue */
 stack<int> s1;
  stack<int> s2;
void StackQueue :: push(int x)
 {
       s1.push(x);
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
    if(s2.empty())
    {
        if(s1.empty())
        {
            return -1;
        }
        else
        {
            while(!s1.empty())
            {
                int ele=s1.top();
                s1.pop();
                s2.push(ele);
            }
            int ele2 = s2.top();
            s2.pop();
            return ele2 ;
        }
    }
    else
    {
        int ele2 = s2.top();
            s2.pop();
            return ele2 ;
    }
   
}

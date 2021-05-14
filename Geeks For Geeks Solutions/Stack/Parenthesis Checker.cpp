

#include<bits/stdc++.h>
using namespace std;

bool ArePair(char opening,char closing)
{
    if(opening == '(' && closing == ')')
    return true;
   if(opening == '[' && closing == ']')
    return true;
    if(opening == '{' && closing == '}')
    return true;
    return false;
}

bool AreParanthesesBalanced(string exp)
{
    stack<char> S;
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
         S.push(exp[i]);
        else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if(S.empty() || !ArePair(S.top(),exp[i]))
            return false;
            else
            S.pop();
        }
    }
    return S.empty() ? true:false;
}

int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         string expression;
	 // input expression from STDIN/Console
	cin>>expression;
	if(AreParanthesesBalanced(expression))
		cout<<"balanced\n";
	else
		cout<<"not balanced\n";
         
     }
	
	return 0;
}

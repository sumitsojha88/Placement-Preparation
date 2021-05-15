

using namespace std;


int xdir[8]={0,-1,-1,-1,0,1,1,1};
int ydir[8]={1,1,0,-1,-1,-1,0,1};

bool find(vector<vector<char>> &mat, int x,int y, int n, int m, string str)
{

for(int i=0;i<8;i++)
{
    int X = x + xdir[i];
    int Y= y + ydir[i];
    int j=1;
    
    if(j==str.length()) return true;
    
    while(X>=0 && Y>=0 && X<n && Y<m)
    {
      if(mat[X][Y]==str[j])
      {
          j++;
          if(j==str.length()) return true;
          
          
          X += xdir[i];
          Y += ydir[i];
      }
      else
      break;
        
        
    }
}
  return false;
}


void solution(vector<vector<char>> &mat,int n,int m,string str)
{
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(str[0]==mat[i][j] && find(mat,i,j,n,n,str))
            {
                cout << i << " " << j  << "," ;
                flag = 1;
            }
        }
    }
    
    if(flag==0) cout << -1;
    cout << endl;
}


int main()
 {
   
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    vector<vector<char>> mat(n,vector<char>(m));
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	           {
	               cin>>mat[i][j];
	           }
	    }
	    string str;
	    cin>>str;
	    
	    solution(mat,n,m,str);
	}
	return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int xdir[8]={0,-1,-1,-1,0,1,1,1};
int ydir[8]={1,1,0,-1,-1,-1,0,1};

bool find(vector<vector<char>> &mat, int x,int y, int n, int m, string str)
{
    
    for(int i=0;i<8;i++)
    {
        int X=x+xdir[i];
        int Y=y+ydir[i];
        int j=1;
        
        if(j==str.length())            //finding string have size of 1
          return true;
        
        while(X>=0 && Y>=0 && X<n && Y<m)
        {
            if(mat[X][Y]==str[j])
               {
                   j++;
                   if(j==str.length())
                        return true;
                 X+=xdir[i];
                 Y+=ydir[i];
               }
            
            else
               break;
        }
    }
    return false;
}
void solution(vector<vector<char>> &mat, int n, int m, string str)
{
    int flag=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(str[0]==mat[i][j] && find(mat,i,j,n,m,str))
            {
                cout<<i<<" "<<j<<", ";
                flag=1;
            }
        }
    }
    if(flag==0)
      cout<<-1;
    cout<<endl;
}
int main()
 {
	//code Shokeen
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    vector<vector<char>> mat(n,vector<char>(m));
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	           {
	               cin>>mat[i][j];
	           }
	    }
	    string str;
	    cin>>str;
	    
	    solution(mat,n,m,str);
	}
	return 0;
}

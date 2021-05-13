


int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    char a[9],b[9];
	    for(int i=0;i<=9;i++)
	    {
	        a[i]='0';
	        b[i]='0';
	    }
	    for(int i=0;i<n;i++)
	    {
	        char temp;
	        cin>>temp;
	        switch(temp)
	        {
	            case '!': a[0]='!';
	            break;
	            case '#': a[1]='#';
	            break;
	            case '$': a[2]='$';
	            break;
	            case '%': a[3]='%';
	            break;
	            case '&': a[4]='&';
	            break;
	            case '*': a[5]='*';
	            break;
	            case '@': a[6]='@';
	            break;
	            case '^': a[7]='^';
	            break;
	            case '~': a[8]='~';
	            break;
	            
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        char temp;
	        cin>>temp;
	        switch(temp)
	        {
	            case '!': b[0]='!';
	            break;
	            case '#': b[1]='#';
	            break;
	            case '$': b[2]='$';
	            break;
	            case '%': b[3]='%';
	            break;
	            case '&': b[4]='&';
	            break;
	            case '*': b[5]='*';
	            break;
	            case '@': b[6]='@';
	            break;
	            case '^': b[7]='^';
	            break;
	            case '~': b[8]='~';
	            break;
	            
	        }
	    }
	    for(int i=0;i<9;i++)
	    {
	        if(a[i]!='0')
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    for(int i=0;i<9;i++)
	    {
	        if(b[i]!='0')
	        cout<<b[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}

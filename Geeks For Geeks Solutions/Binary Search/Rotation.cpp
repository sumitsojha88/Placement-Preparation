

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    if(arr[0]<arr[n-1]) return 0;
	    int i=0;
	    int j=n-1;
	    int ans=0;
	    
	    while(i<=j)
	    {
	      
	        if(arr[i]<=arr[j])
	        return i;
	        
	        
	        int m = i + (j-i)/2;
	        if(arr[m]<=arr[(m+n-1)%n] && arr[m]<=arr[(m+1)%n])
	        {
	            ans = m;
	            break;
	        }
	        else if(arr[i]<=arr[m])
	        {
	            
	             i  = m+1;
	        }
	        else if(arr[j]>=arr[m])
	        {
	            j = m-1;
	        }
	    }
	    
	    return ans;
	}

};

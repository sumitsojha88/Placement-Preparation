

class Solution {
public:
        int minimum(vector<int> &arr,int n)
        {
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
        int binary(vector<int>& nums,int s,int e,int t)
        {
                while(s<=e)
                {
                        int m=s + (e-s)/2;
                        if(nums[m]==t)
                        {
                                return m;
                        }
                        else if(nums[m]>t)
                        {
                                e = m-1;
                        }
                        else
                        {
                                s = m+1;
                        }
                }
                
                return -1;
        }
    int search(vector<int>& nums, int t) {
            
           int mini = 0;
           
            int n=nums.size();
            int i=0;
            int j=nums.size()-1;
             mini = minimum(nums,n);
            
            int f=-1;
            int ff=-1;
            
              f = binary(nums,i,mini-1,t);
              ff = binary(nums,mini,j,t);
            
            
           // return f;
            int ans = max(f,ff);
            
            return ans;
            
         
        
    }
};


same as : Capacity to ship packages within d days.


  
  
  class Solution {
public:
      bool isvalid(vector<int>& a, int mid,int m)
      {
              int n=a.size();
              int sum = 0;
              int k=1;
              for(int i=0;i<n;i++)
              {
                   sum += a[i];
                   if(sum>mid)
                   {
                           sum = a[i];
                           k++;     
                           
                           if(k>m) return true;
                   }
                      
                      
              }
              
              return false;
      }
    int splitArray(vector<int>& nums, int m) {
            
            int n=nums.size();
            int sum = 0;
           
            int maxi=0;
            for(int i=0;i<n;i++)
            {
                    sum += nums[i];
                    maxi = max(maxi,nums[i]);
            }
             int l=maxi;
            int  r=sum;
            while(l<=r)
            {
                    int mid = l+(r-l)/2;
                    
                    if(isvalid(nums,mid,m))
                    {
                           
                            l = mid+1;
                    }
                    else
                    {
                            r = mid-1;  
                    }
            }
            
            return l;
                   
        
    }
};

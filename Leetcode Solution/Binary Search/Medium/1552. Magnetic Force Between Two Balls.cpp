
class Solution {
public:
        bool isvalid(vector<int>& p,int mid,int m,int n)
        {
                int lastp = p[0];
                int left = m-1;
                int i=1;
                while(i<n && left!=0)
                {
                      if((p[i]-lastp)<mid)
                      {
                              i++;
                      }
                       else
                       {
                               lastp = p[i];
                               left--;
                              //  i++;        
                       }            
                }   
                if(left==0) 
                        return true;
                else
                        return false;
        }
    int maxDistance(vector<int>& p, int m) {
            sort(p.begin(),p.end());
            int n=p.size();
            int i=0;
            int j=*max_element(p.begin(),p.end());
            int ans=0;
            while(i<=j)
            {
                    int mid = i + (j-i)/2;
                    if(isvalid(p,mid,m,n))
                    {
                            ans = mid;
                            i = mid+1 ;         
                    }
                    else
                    {
                            j = mid - 1;
                    }
            }
            
            return ans;
        
    }
};

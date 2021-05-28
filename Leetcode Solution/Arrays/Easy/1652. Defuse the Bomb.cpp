
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
            vector<int> ans;
            int n=code.size();
            int sum;
            vector<int> a;
            for(int i=0;i<n;i++)
            {
                   a.push_back(code[i]);
            }
           
            for(int i=0;i<n;i++)
            {
                    a.push_back(code[i]);
            }
            for(int i=0;i<n;i++)
            {
                          sum = 0;
                          if(k>0)
                          {
                          for(int j=i+1;j<i+k+1;j++)
                          {
                             sum += a[j];
                          }
                          }     
                          else if(k<0)
                          {
                                  if(i+k<0)
                                  {
                                          for(int j=n+i+k;j<n+i;j++)
                                          {
                                                   sum += a[j];
                                          }
                                  }
                                  else if(i+k>0)
                                  {
                                      for(int j=i+k;j<i;j++)    
                                      {
                                              sum += a[j];
                                      }
                                  }
                                  else if(i+k==0)
                                  {
                                         for(int j=0;j<i;j++)    
                                      {
                                              sum += a[j];
                                      }  
                                  }
                        }
                    
                    ans.push_back(sum);
                
            }
            
            
            return ans;
    }
};

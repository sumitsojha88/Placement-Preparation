
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
            int n=target.size();
            int m=arr.size();
            int count=0;
            for(int i=0;i<n;i++)
            {       count=0;
                   for(int j=0;j<m;j++)
                   {
                           if(target[i]!=arr[j])
                           {
                               count++;    
                           }
                                   
                                   
                   }
             if(count==n)
                     return false;
            }
            
            return true;
        
    }
};

Approach:  two pointer 
1)make two variable i and j and initialize them.
2) keep on adding in sum if number at j is greater than number at i (ascending)
3) keep track of maximum sum
4)if its not ascending make i and j equal and sum to be equal to that element and repeat earliar points.




Time :- O(n)


class Solution {
public:
    int maxAscendingSum(vector<int>& a) {
            
            int sum = 0;
            int i=0;
            int n=a.size();
            int j=1;
            sum = a[0];
            int ans=a[0];
            while(j<n)
            {
                    if(a[j]>a[i])
                    {
                            sum += a[j];
                            i++;
                    }
                    else
                    {
                           i = j;
                           sum = a[j];
                           
                    }
                    
                    j++;
                    
                    
                    
                    
                    ans = max(ans,sum);
            }
            
            
            return ans;
        
    }
};

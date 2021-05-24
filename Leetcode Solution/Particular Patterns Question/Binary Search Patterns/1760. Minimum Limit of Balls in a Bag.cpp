Explanation
Binary search the size of bag,
which is called penalty in this problem.

For each penalty value, we split the balls into bags with this value.
For example, the mid = 3,
A[i] = 2, we split it into [2], and operations = 0
A[i] = 3, we split it into [3], and operations = 0
A[i] = 4, we split it into [3,1], and operations = 1
A[i] = 5, we split it into [3,2], and operations = 1
A[i] = 6, we split it into [3,3], and operations = 1
A[i] = 7, we split it into [3,3,1], and operations = 2

The number of operation we need is (a - 1) / mid

If the total operation > max operations,
the size of bag is too small,
we set left = mid + 1

Otherwise,
this size of bag is big enough,
we set right = mid

We return the final result,
where result = left = right.


Complexity
Time O(nlog(max(nums[]))
Space O(1)
  
  

class Solution {
public:
    int minimumSize(vector<int>& nums, int k) {
            
            int l=1;
            int r=*max_element(nums.begin(),nums.end());
            int n=nums.size();
            while(l<r)
            {
                 int m = (l+r)/2;
                 int sum =0;
                    for(int i=0;i<n;i++)
                    {
                         sum += (nums[i]-1)/m;   
                    }
                    
                    if(sum>k)
                    {
                            l = m +1;
                    }
                    else
                    {
                            r = m;
                    }
            }
            
            return l;
        
    }
};

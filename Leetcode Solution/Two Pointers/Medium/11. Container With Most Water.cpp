

Appoach:- two pointer 

Start by evaluating the widest container, using the first and the last line.
  All other possible containers are less wide, so to hold more water, they need to be higher. 
  Thus, after evaluating that widest container, skip lines at both ends that doNt support a higher height.
  Then evaluate that new container we arrived at. Repeat until there are no more possible containers left





Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1
Example 3:

Input: height = [4,3,2,1,4]
Output: 16
Example 4:

Input: height = [1,2,1]
Output: 2
  
  
class Solution {
public:
    int maxArea(vector<int>& h) {
        int i = 0, j = h.size()-1;
            int ans= min(h[0],h[j])*(j-i);
            int maxi = 0;
          maxi =  max(ans,maxi);
            while(i<j)
            {
                   if(h[i]>h[j])
                   {
                           j--;
                   }
                    else
                    {
                            i++;
                    }
                    
                    ans = min(h[i],h[j])*(j-i);
                    
                    maxi = max(ans,maxi);
                 
            }
            
            
            
            return maxi;
       
    }
    
};

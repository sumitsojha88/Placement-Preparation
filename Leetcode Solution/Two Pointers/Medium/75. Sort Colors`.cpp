



Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
Example 3:

Input: nums = [0]
Output: [0]
Example 4:

Input: nums = [1]
Output: [1]






class Solution {
public:
    void sortColors(vector<int>& a) {

            int n=a.size();
            
            int low=0,high=n-1,mid=0;
            while(mid<=high)
            {
              switch(a[mid])
              {
                      case 0:
                              swap(a[low],a[mid]);
                              low++;mid++;
                              break;
                      case 1:
                              mid++;
                              break;
                      case 2:
                              swap(a[mid],a[high]);
                              high--;
                              break;
                                      
                              
              }
                 }
          
    }
};

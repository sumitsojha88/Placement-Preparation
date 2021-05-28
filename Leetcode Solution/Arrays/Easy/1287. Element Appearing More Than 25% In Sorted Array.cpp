
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
            
            int count=1;
            int temp=arr[0];
            if(arr.size()<4) return arr[0];
            for(int i=1;i<arr.size();i++)
            {
                  if(temp==arr[i])
                          count++;
                    else
                    {
                            count=1;
                            temp=arr[i];
                    }
                    
                    
                    if(count>arr.size()/4)
                            return temp;
            }
        
            return -1;
    }
};

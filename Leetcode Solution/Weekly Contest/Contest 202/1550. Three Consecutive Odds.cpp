
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
            
            int n=arr.size();
            int count=0;
            for(int i=0;i<n;i++)
            {
                    if(arr[i]%2) count++;
                    else count=0;
                    
                    if(count==3) return true;
            }
            
            return false;
        
    }
};

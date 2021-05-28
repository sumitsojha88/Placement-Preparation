
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
            
            if(arr.size()<3)
                    return false;
            for(int i=0;i<arr.size()-2;i++)
            {
                    if(arr[i]%2 && (arr[i+1]%2  && arr[i+2]%2))
                            return true;
            }
            
            return false;
        
    }
};


class Solution {
public:
    int largestAltitude(vector<int>& gain) {
            
            vector<int> temp;
            temp.push_back(0);
             temp.push_back(gain[0]);
            int n=gain.size();
            for(int i=1;i<n;i++)
            {
                  temp.push_back(temp[i]+gain[i]);  
            
            }
            int maxi=INT_MIN;
            for(int i=0;i<temp.size();i++)
            {
                    maxi = max(maxi,temp[i]);
            }
            
            return maxi;
        
    }
};

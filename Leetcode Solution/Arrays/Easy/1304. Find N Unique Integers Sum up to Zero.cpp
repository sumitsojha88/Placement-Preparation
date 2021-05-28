
class Solution {
public:
    vector<int> sumZero(int n) {
            vector<int> A;
            
        int ans=n/2;
            for(int i=-ans;i<=ans;i++)
            {
                    A.push_back(i);
                    if(i==0 && n%2==0)
                            A.pop_back();
            }
         return A;  
    }
};

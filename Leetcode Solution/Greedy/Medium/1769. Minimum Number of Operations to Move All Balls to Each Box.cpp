

class Solution {
public:
    vector<int> minOperations(string b) {
            
            vector<int> ans;
            
            int n=b.size();
            
            for(int i=0;i<n;i++)
            {
                    int sum = 0;
                    for(int j=0;j<n;j++)
                    {
                            if(b[j]=='1')
                            {
                                    sum += abs(i-j);
                            }
                    }
                    
                    ans.push_back(sum);
            }
            
            
            return ans;
        
    }
};

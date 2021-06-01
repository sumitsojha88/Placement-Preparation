
class Solution {
public:
        int solve(vector<int>& a,int k)
        {
                if(k<0) return 0;
                int n=a.size();
                int j=0;
                int ans=0;
                int sum=0;
                for(int i=0;i<n;i++)
                {
                        sum += a[i];
                        while(j<n && sum>k)
                        {
                             sum -= a[j++];   
                        }
                        
                        
                        ans += i-j +1;
                }
                
                return ans;
        }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
            
         return solve(nums,goal)-solve(nums,goal-1);
         
    }
};

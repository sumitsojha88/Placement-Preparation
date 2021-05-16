

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        
        int  n= nums.size();
        int temp=0;
        for(int i=0;i<n;i++)
        {
            temp ^= nums[i];
        }
        int set = temp&(~(temp-1));
        
        int x=0;
        int y=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]&set)
            x = x^nums[i];
            else
            y = y^nums[i];
        }
        vector<int> ans;
        ans.push_back(x);
         ans.push_back(y);
         
         sort(ans.begin(),ans.end());
         
         return ans;
        
        
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends

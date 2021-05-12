

Ques link: https://leetcode.com/problems/set-mismatch/


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
            vector<int> res(2); //Result
        vector<int> m(nums.size(), 0); //Record frequency
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]-1]++;
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(m[i] == 2){ //If frequency is 2 (repeated)
                res[0] = i+1; //Put into result
            }else if(!m[i]){ //If frequency is 0 (the missing one)
                res[1] = i+1; //Put into result
            }
        }
        
        return res;
            
    }
};

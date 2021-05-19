

class FindSumPairs {
public:
        unordered_map<int,int> mps;
        vector<int> vf;
        vector<int> vs;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
            
            vf = nums1;
            vs = nums2;
            int n=nums1.size();
            for(int i=0;i<nums2.size();i++)
            {
                    mps[nums2[i]]++;
            }
           
        
    }
    
    void add(int index, int val) {
            
            mps[vs[index]]--;
            vs[index] += val;
            mps[vs[index]]++;
           
            
          
        
    }
    
    int count(int tot) {
            
            int ans=0;
            for(int i=0;i<vf.size();i++)
            {
                  ans += mps[tot-vf[i]];  
            }
            
            
            return ans;
            
        
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */

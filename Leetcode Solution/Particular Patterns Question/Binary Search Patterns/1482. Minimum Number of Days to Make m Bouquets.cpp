Intuition:-
  
If m * k > n, it impossible, so return -1.
Otherwise, it's possible, we can binary search the result.
left = 1 is the smallest days,
right = 1e9 is surely big enough to get m bouquests.
So we are going to binary search in range [left, right].


Explanation:-
  
Given mid days, we can know which flowers blooms.
Now the problem is, given an array of true and false,
find out how many adjacent true bouquest in total.

If bouq < m, mid is still small for m bouquest.
So we turn left = mid + 1

If bouq >= m, mid is big enough for m bouquest.
So we turn right = mid


Complexity:-
  
Time O(Nlog(maxA))
Space O(1)


class Solution {
public:
    int minDays(vector<int>& b, int m, int k) {
        
            int l=0;
            int n=b.size();
            int r=*max_element(b.begin(),b.end());
            if(m*k>n) return -1;
            while(l<r)
            {
                    int mid = (l+r)/2;
                    int bq = 0;
                    int conti = 0;
                    for(int i=0;i<n;i++)
                    {
                            if(b[i]>mid)
                            {
                                    conti=0;
                            }
                            else if(++conti>=k)
                            {
                                    bq++;
                                    conti=0;
                            }
                    }
                    
                    if(bq<m)
                    {
                          l = mid+1;  
                    }
                    else
                    {
                            r = mid;
                    }
            }
            
            return l;
    }
};

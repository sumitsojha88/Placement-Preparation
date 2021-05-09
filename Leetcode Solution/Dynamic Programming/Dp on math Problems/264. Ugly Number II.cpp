class Solution {
public:
    int nthUglyNumber(int n) {
            if(n == 1)
            return 1;
        vector<int> uglies(n);
        uglies[0] = 1;
        int l2 = 0, l3 = 0, l5 = 0; //indexes for respective list
        for(int i=1; i<n; i++)
        {
                uglies[i] = min(2*uglies[l2],min(3*uglies[l3],5*uglies[l5]));
                if(uglies[i]==2*uglies[l2])
                        l2++;
                if(uglies[i]==3*uglies[l3])
                        l3++;
                if(uglies[i]==5*uglies[l5])
                        l5++;
                
        }
        return uglies[n - 1];
        
    }
};

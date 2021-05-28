
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
 int maxv = -1,temp;
        for(int i=arr.size()-1;i>=0;i--)
        {
            temp = arr[i];
            arr[i]=maxv;
            maxv = max(maxv,temp);
        }
        return arr;
    }
};

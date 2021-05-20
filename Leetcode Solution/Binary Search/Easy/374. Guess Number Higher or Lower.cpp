

class Solution {
public:
    int guessNumber(int n) {
        
            int i = 1;
        int j = n;
        while (i < j) {
            int num = i + (j-i)/2;
            if (guess(num) == 0) return num;
            if (guess(num) == 1) {
                i = num + 1;
            } else {
                j = num - 1;
            }
        }
        
        return i;
    }
};

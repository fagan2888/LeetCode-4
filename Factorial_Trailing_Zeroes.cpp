class Solution {
public:
    int trailingZeroes(int n) {
        int fives = 0;
        while (n) {
            fives += n / 5;
            n /= 5;
        }
        return fives;
    }
};

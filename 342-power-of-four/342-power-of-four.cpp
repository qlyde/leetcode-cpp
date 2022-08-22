class Solution {
public:
    bool isPowerOfFour(int n) {
        // n = 4^x
        // log4(n) = x
        if (n == 0) return false;
        double d = log(n) / log(4);
        return floor(d) == d;
    }
};
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n < 1) return false;
        double x = log10(n) / log10(3);
        return x == (int) x;
    }
};

// n = 3^x
// log3(n) = x
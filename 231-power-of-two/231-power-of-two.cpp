class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n && !(n & ((long) n - 1));
    }
};

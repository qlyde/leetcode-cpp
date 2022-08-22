class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        for (; n; n >>= 1) if (n & 1) ++cnt;
        return cnt;
    }
};
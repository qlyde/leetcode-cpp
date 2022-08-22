class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret = 0;
        for (int i = 0; i < 32; ++i) {
            ret |= n & 1;
            n >>= 1;
            if (i != 31) ret <<= 1;
        }
        return ret;
    }
};

// 1101 0000
// 0110 0010
// 0011 0100
// 0001 1010
//
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        // swap 16 bit blocks
        n = (n >> 16) | (n << 16);

        // swap 8 bit blocks
        n = ((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8);

        // swap 4 bit blocks
        n = ((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4);

        // swap 2 bit blocks
        n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);

        // swap 1 bit blocks
        n = ((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1);

        return n;
    }
};

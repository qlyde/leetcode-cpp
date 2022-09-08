class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ret(n + 1, 0);
        for (int i = 1; i <= n; ++i)
            ret[i] = ret[i >> 1] + (i & 1);
        return ret;
    }
};

// 0    0
// 1    1
// 10   1
// 11   2
// 100  1
// 101  2
// 110  2
// 111  3
// 1000 1


class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ret;
        for (int i = 0; i <= n; ++i) ret.push_back(hammingWeight(i));
        return ret;
    }

private:
    int hammingWeight(int i) {
        int cnt = 0;
        for (; i; i &= i - 1) ++cnt;
        return cnt;
    }
};

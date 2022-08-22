class Solution {
public:
    int titleToNumber(string columnTitle) {
        //  1 * 26 +  2 = AB
        //  1 * 26 +  1 = AA
        // 26 * 26 + 26 = ZZ
        int ret = 0, sz = columnTitle.length();
        unsigned m = 1;
        for (int i = sz - 1; i > -1; --i, m *= 26)
            ret += m * (columnTitle[i] - 'A' + 1);
        return ret;
    }
};
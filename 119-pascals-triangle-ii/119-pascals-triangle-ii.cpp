class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret{1};
        for (unsigned i = 1; i <= rowIndex; ++i) {
            unsigned long long a = rowIndex - i + 1;
            a *= ret.back();
            a /= i;
            ret.emplace_back(a);
        }
        return ret;
    }
};
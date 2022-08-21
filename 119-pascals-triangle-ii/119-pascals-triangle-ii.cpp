class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret{1};
        for (unsigned i = 1; i <= rowIndex; ++i) {
            ret.emplace_back((long long) ret.back() * (rowIndex - i + 1) / i);
        }
        return ret;
    }
};
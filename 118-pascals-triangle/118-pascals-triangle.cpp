class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        auto ret = vector<vector<int>>{};
        for (auto i = 0; i < numRows; ++i) {
            ret.push_back(vector<int>(i + 1, 1));
            for (auto j = 1; j < i; ++j) ret[i][j] = ret[i - 1][j - 1] + ret[i - 1][j];
        }
        return ret;
    }
};

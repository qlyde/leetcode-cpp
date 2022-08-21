class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        auto prefix = string{};
        auto const& str1 = strs.front(), str2 = strs.back();
        for (auto c1 = str1.begin(), c2 = str2.begin(); c1 != str1.end() && c2 != str2.end() && *c1 == *c2; ++c1, ++c2) {
            prefix += *c1;
        }

        return prefix;
    }
};

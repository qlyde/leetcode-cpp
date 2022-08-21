class Solution {
public:    
    int romanToInt(string s) {
        auto m = unordered_map<char, int>{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };

        auto ret = m[s.back()];

        for (auto i = 0; i < s.size() - 1; ++i) {
            auto const& p = m[s[i]];
            auto const& q = m[s[i + 1]];

            if (p < q) ret -= p;
            else ret += p;
        }

        return ret;
    }
};
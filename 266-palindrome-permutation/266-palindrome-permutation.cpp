class Solution {
public:
    bool canPermutePalindrome(string s) {
        auto cnts = unordered_map<char, int>{};
        for (auto const& ch : s) ++cnts[ch];
        
        return accumulate(cnts.begin(), cnts.end(), 0, [](auto const& p, auto const& e) {
            return p + e.second % 2;
        }) <= 1;
    }
};

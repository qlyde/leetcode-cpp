class Solution {
public:
    bool canPermutePalindrome(string s) {
        auto cnts = unordered_map<char, int>{};
        for (auto const& ch : s) ++cnts[ch];

        auto const even = s.length() & 1 == 0;
        auto odd_ch = false;
        for (auto const& [ch, cnt] : cnts) {
            if (cnt & 1 != 0) {
                if (odd_ch && !even) return false;
                odd_ch = true;
            } else if (cnt & 1 == 0 && even) return false;
        }
        
        return true;
    }
};

// even length -> no odd counts allowed
// odd length -> one odd count allowed
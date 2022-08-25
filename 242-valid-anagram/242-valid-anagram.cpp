class Solution {
public:
    bool isAnagram(string s, string t) {
        auto mp = unordered_map<char, int>{};
        for (auto const& ch : s) ++mp[ch];
        for (auto const& ch : t) if (!mp[ch]--) return false;
        for (auto const& [ch, cnt] : mp) if (cnt) return false;
        return true;
    }
};


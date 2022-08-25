class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int mp[26] = {0};
        for (char const& ch : s) ++mp[ch - 'a'];
        for (char const& ch : t) --mp[ch - 'a'];
        for (int i = 0; i < 26; ++i) if (mp[i]) return false;
        return true;
    }
};


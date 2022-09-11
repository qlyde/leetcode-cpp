class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        unordered_map<char, int> mp;
        int ret = 0;

        for (int l = 0, r = 0; r < size; ++r) {
            if (mp.find(s[r]) == mp.end() || mp[s[r]] < l)
                ret = max(ret, r - l + 1);
            else
                l = mp[s[r]] + 1;
            mp[s[r]] = r;
        }

        return ret;
    }
};

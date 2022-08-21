class Solution {
public:
    bool isPalindrome(string s) {
        auto len = s.size();
        for (int l = 0, r = len - 1; l < r; ++l, --r) {
            while (l < len && !isalnum(s[l])) ++l;
            while (r >= 0 && !isalnum(s[r])) --r;
            if (l <= r && tolower(s[l]) != tolower(s[r])) return false;
        }

        return true;
    }
};


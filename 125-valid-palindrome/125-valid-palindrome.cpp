class Solution {
public:
    bool isPalindrome(string s) {
        auto f = vector<char>{}, b = vector<char>{};
        for (auto const& ch : s) {
            if (isalnum(ch)) {
                auto const l = tolower(ch);
                f.emplace_back(l);
                b.insert(b.begin(), l);
            }
        }
        return f == b;
    }
};

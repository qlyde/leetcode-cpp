class Solution {
public:
    string reverseVowels(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            while (l < s.size() && !is_vowel(s[l])) ++l;
            while (r >= 0 && !is_vowel(s[r])) --r;
            if (l < r) swap(s[l++], s[r--]);
        }
        return s;
    }

private:
    bool is_vowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};

class Solution {
public:
    string reverseVowels(string s) {
        int l = 0, r = s.size() - 1;
        bool lv = false, rv = false;
        while (l < r) {
            lv = is_vowel(s[l]);
            rv = is_vowel(s[r]);

            if (lv && rv) swap(s[l++], s[r--]);
            else if (lv) --r;
            else ++l;
        }

        return s;
    }

private:
    bool is_vowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};


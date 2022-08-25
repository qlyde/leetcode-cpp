class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.length() > magazine.length()) return false;

        int letters[26] = {0};
        for (char const& letter : magazine) ++letters[letter - 'a'];

        for (char const& letter : ransomNote)
            if (!letters[letter - 'a']--) return false;

        return true;
    }
};


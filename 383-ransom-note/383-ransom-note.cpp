class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.length() > magazine.length()) return false;

        unordered_map<char, int> letters;
        for (char const& letter : magazine) ++letters[letter];

        for (char const& letter : ransomNote)
            if (letters.find(letter) == letters.end() || letters[letter]-- == 0) return false;

        return true;
    }
};



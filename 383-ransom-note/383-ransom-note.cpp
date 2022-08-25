class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.length() > magazine.length()) return false;

        unordered_map<char, int> letters;
        for (char const& letter : magazine) {
            if (letters.find(letter) != letters.end()) ++letters[letter];
            else letters[letter] = 1;
        }

        for (char const& letter : ransomNote) {
            if (letters.find(letter) == letters.end() || letters[letter] == 0) return false;
            --letters[letter];
        }

        return true;
    }
};
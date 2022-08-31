class Solution {
public:
    bool canWinNim(int n) {
        return n & 0b11;
    }
};

// n = 1, 2, 3 => win
// n = 4       => lose
// n = 5, 6, 7 => win
// n = 8       => lose
// ...
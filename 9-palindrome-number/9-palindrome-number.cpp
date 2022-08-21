class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        auto n = x;
        auto rev = 0ULL;

        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }

        return x == rev;
    }
};
  
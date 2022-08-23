class Solution {
public:
    bool isHappy(int n) {
        int sqsum;
        unordered_set<int> seen;
        while (sqsum != 1) {
            sqsum = 0;
            while (n > 0) {
                int m = n % 10;
                sqsum += m * m;
                n /= 10;
            }

            if (seen.find(sqsum) != seen.end()) return false;
            seen.insert(sqsum);
            n = sqsum;
        }

        return true;
    }
};
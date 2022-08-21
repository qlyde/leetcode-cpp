class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        auto carry = 1;
        for (auto d = digits.rbegin(); d != digits.rend(); ++d) {
            if (*d == 9 && carry) {
                *d = 0;
                carry = 1;
            } else {
                *d += carry;
                carry = 0;
            }
        }

        if (carry == 1) digits.insert(digits.begin(), 1);
        return digits;
    }
};
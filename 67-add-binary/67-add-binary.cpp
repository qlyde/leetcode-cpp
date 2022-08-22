class Solution {
public:
    string addBinary(string a, string b) {
        int p = a.size() - 1, q = b.size() - 1;
        if (p < q) return addBinary(b, a);

        string ret{};
        int carry{0};
        for (; p >= 0 || q >= 0; --p, --q) {
            if (a[p] == '1') ++carry;
            if (q > -1 && b[q] == '1') ++carry;

            if (carry & 1) ret.insert(0, 1, '1');
            else ret.insert(0, 1, '0');
            carry >>= 1;
        }

        if (carry) ret.insert(0, 1, '1');
        return ret;
    }
};


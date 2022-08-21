class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x;

        unsigned l = 0, r = x, m, d;

        while (l <= r) {
            // 0 1 2 3 4 5 6
            // l     m     r
            // l m r
            //    lmr
            m = l + (r - l) / 2;
            d = x / m;

            if (m == d)
                return m;
            else if (m > d)
                r = m - 1;
            else
                l = m + 1;
        }
        
        return r;
    }
};
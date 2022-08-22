/**
 * The read4 API is defined in the parent class Reader4.
 *     int read4(char *buf4);
 */

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Number of characters to read
     * @return    The number of actual characters read
     */
    int read(char *buf, int n) {
        char buf4[4];
        int remaining = n;
        while (remaining > 0) {
            int r = read4(buf4);
            if (r == 0) break;

            memcpy(buf + n - remaining, buf4, min(remaining, r));
            remaining -= min(remaining, r);
        }

        return n - remaining;
    }
};
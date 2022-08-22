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
        int i;
        for (i = n; i > 0;) {
            int r = read4(buf4);
            if (r == 0) break;

            memcpy(buf + n - i, buf4, min(i, r));
            i -= min(i, r);
        }
        
        return n - i;
    }
};
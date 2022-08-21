class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        
        auto const h = haystack.size(), n = needle.size();
        if (n > h) return -1;
        
        for (auto p = 0; p <= h - n; ++p) {
            if (haystack.substr(p, n) == needle) {
                return p;
            }
        }
        
        return -1;
    }
};

// try KMP

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> st;
        unordered_map<char, char> ts;
        int l = s.length(); // == t.length()
        for (int i = 0; i < l; ++i) {
            if (st.find(s[i]) == st.end()) {
                if (ts.find(t[i]) != ts.end()) return false;
                st[s[i]] = t[i];
                ts[t[i]] = s[i];
            } else if (st[s[i]] != t[i]) return false;
        }
        return true;
    }
};
    
// s -> t found     => t[i] = t
//        not found => t -> s must not exist

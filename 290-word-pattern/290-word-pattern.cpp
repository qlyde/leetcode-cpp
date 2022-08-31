class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> v(istream_iterator<string>(ss), {});
        if (v.size() != pattern.size()) return false;

        unordered_map<char, string> ps;
        unordered_map<string, char> sp;

        for (int i = 0; i < v.size(); ++i) {
            if (ps.find(pattern[i]) == ps.end()) { // pattern char unmapped
                if (sp.find(v[i]) != sp.end()) return false; // s word mapped
                ps[pattern[i]] = v[i];
                sp[v[i]] = pattern[i];
            } else if (ps[pattern[i]] != v[i]) return false; // pattern char mapped, but not to word
        }

        return true;
    }
};
class Solution {
public:
    bool isValid(string s) {
        auto st = stack<char>{};

        for (auto const& ch : s) {
            if (ch == '(') st.push(')');
            else if (ch == '[') st.push(']');
            else if (ch == '{') st.push('}');
            else {
                if (st.empty() || st.top() != ch) return false;
                st.pop();
            }
        }

        return st.empty();
    }
};
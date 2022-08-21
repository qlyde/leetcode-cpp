class Solution {
public:
    int lengthOfLastWord(string s) {
        auto iss = istringstream{s};
        auto tkns = vector<string>{istream_iterator<string>{iss}, {}};
        return tkns.back().size();
    }
};


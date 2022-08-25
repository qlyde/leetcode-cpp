class Solution {
public:
    bool isStrobogrammatic(string num) {
        auto mp = unordered_map<char, char>{
            {'0', '0'},
            {'1', '1'},
            {'2', '-'},
            {'3', '-'},
            {'4', '-'},
            {'5', '-'},
            {'6', '9'},
            {'7', '-'},
            {'8', '8'},
            {'9', '6'},
        };

        auto rot = string{};
        for (auto it = num.rbegin(); it != num.rend(); ++it)
            rot.push_back(mp[*it]);
        return rot == num;
    }
};

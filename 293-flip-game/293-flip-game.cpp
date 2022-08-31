class Solution {
public:
    vector<string> generatePossibleNextMoves(string currentState) {
        vector<string> ret;
        for (int i = 0; i < currentState.size() - 1; ++i) {
            if (currentState[i] == '+' && currentState[i + 1] == '+') {
                string copy = currentState;
                copy[i] = '-';
                copy[i + 1] = '-';
                ret.push_back(copy);
            }
        }
        return ret;
    }
};
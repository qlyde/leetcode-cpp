class Solution {
public:
    vector<string> generatePossibleNextMoves(string currentState) {
        vector<string> ret;
        for (int i = 0; i < currentState.size() - 1; ++i) {
            if (currentState[i] == '+' && currentState[i + 1] == '+') {
                currentState[i] = currentState[i + 1] = '-';
                ret.push_back(currentState);
                currentState[i] = currentState[i + 1] = '+';
            }
        }
        return ret;
    }
};


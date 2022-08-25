class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        int sz = wordsDict.size(), i1 = -1, i2 = -1, ret = numeric_limits<int>::max();
        for (int i = 0; i < sz; ++i) {
            if (wordsDict[i] == word1) i1 = i;
            else if (wordsDict[i] == word2) i2 = i;
            
            if (i1 != -1 && i2 != -1) ret = min(ret, abs(i1 - i2));
        }
        return ret;
    }
};

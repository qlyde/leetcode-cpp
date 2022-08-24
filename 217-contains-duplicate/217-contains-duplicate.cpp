class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int const& num : nums) {
            if (seen.find(num) != seen.end()) return true;
            seen.insert(num);
        }
        return false;
    }
};

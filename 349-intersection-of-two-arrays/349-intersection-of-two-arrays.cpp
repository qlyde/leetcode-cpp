class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        vector<int> ret;

        for (int const& n : nums2) {
            if (s1.find(n) != s1.end()) {
                ret.push_back(n);
                s1.erase(n);
            }
        }

        return ret;
    }
};

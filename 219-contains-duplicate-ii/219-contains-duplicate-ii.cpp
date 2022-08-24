class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> idxs;
        for (int i = 0, sz = nums.size(); i < sz; ++i) {
            if (idxs.find(nums[i]) != idxs.end() && abs(idxs[nums[i]] - i) <= k) return true;
            idxs[nums[i]] = i;
        }
        return false;
    }
};

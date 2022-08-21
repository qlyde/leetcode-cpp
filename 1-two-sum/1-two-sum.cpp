class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        auto m = unordered_map<int, int>{};

        for (auto i = 0; i < nums.size(); ++i) {
            auto const n = target - nums[i];
            if (m.find(n) != m.end()) return {m[n], i};
            m[nums[i]] = i;
        }

        return {};
    }
};
  
class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        auto ret = vector<string>{};

        nums.push_back(upper + 1);
        auto prev = lower - 1;

        for (auto i = 0; i < nums.size(); ++i) {
            if (nums[i] - prev > 1) {
                auto start = prev + 1;
                auto end = nums[i] - 1;
                if (start == end) ret.push_back(to_string(start));
                else ret.push_back(to_string(start) + "->" + to_string(end));
            }

            prev = nums[i];
        }

        return ret;
    }
};
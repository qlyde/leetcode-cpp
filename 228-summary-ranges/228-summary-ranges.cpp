class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        auto ret = vector<string>{};
        auto sz = nums.size();

        for (auto start = 0, end = 0; end < sz; ++end) {
            if (end < sz - 1 && nums[end + 1] == 1 + nums[end]) continue;
            if (start == end) ret.push_back(to_string(nums[start]));
            else ret.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
            start = end + 1;
        }

        return ret;
    }
};

// 0 1 2 4 5 7
// s   e
//       b
//       s e
//           b

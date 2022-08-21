class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto i = 0;
        for (auto const& num : nums)
            if (num != nums[i])
                nums[++i] = num;

        return i + 1;
    }
};

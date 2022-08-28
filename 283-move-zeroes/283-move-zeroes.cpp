class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = 0, j = 0; j < nums.size(); ++j)
            if (nums[j]) swap(nums[i++], nums[j]);
    }
};


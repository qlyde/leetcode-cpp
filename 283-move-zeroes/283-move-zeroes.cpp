class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for (int j = 0; j < nums.size(); ++j)
            if (nums[j]) nums[i++] = nums[j];
        for (; i < nums.size(); ++i) nums[i] = 0;
    }
};


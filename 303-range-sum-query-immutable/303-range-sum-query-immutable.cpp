class NumArray {
public:
    NumArray(vector<int>& nums) : sums_{nums[0]} {
        // partial_sum(nums.begin(), nums.end(), back_inserter(sums_));
        int size = nums.size();
        for (int i = 1; i < size; ++i)
            sums_.push_back(sums_[i - 1] + nums[i]);
    }

    int sumRange(int left, int right) {
        return sums_[right] - (left ? sums_[left - 1] : 0);
    }

private:
    vector<int> sums_;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

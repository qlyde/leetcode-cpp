class TwoSum {
public:
    TwoSum() = default;

    void add(int number) {
        nums_.insert(lower_bound(nums_.begin(), nums_.end(), number), number);
    }

    bool find(int value) {
        int l = 0, r = nums_.size() - 1;
        while (l < r) {
            if (nums_[l] + nums_[r] < value) ++l;
            else if (nums_[l] + nums_[r] > value) --r;
            else return true;
        }
        return false;
    }

private:
    vector<int> nums_;
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */

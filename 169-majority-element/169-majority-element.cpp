class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unsigned sz = nums.size();
        unsigned target = sz / 2;
        unordered_map<int, unsigned> cnt;
        for (auto const& num : nums) {
            if (cnt.find(num) == cnt.end()) cnt[num] = 1;
            else ++cnt[num];
            if (cnt[num] > target) return num;
        }
        return -1; // never
    }
};


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // sum = 2(x + y + z + ...) + ret
        return accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
    }
};
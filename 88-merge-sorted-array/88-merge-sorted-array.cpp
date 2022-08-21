class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1 = m - 1, n2 = n - 1;

        for (int b = m + n - 1; b >= 0; --b) {
            if (n2 < 0 || (n1 >= 0 && nums1[n1] > nums2[n2])) {
                nums1[b] = nums1[n1];
                --n1;
            } else {
                nums1[b] = nums2[n2];
                --n2;
            }
        }
    }
};

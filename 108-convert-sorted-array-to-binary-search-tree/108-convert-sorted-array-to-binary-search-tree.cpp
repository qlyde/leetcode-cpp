/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // -10 -3 -1 0 5 6 9
        // -10 -3 -1   5 6 9
        if (nums.empty()) return nullptr;
        
        auto m = nums.begin(); advance(m, nums.size() / 2);
        auto l = vector<int>(nums.begin(), m);
        auto r = vector<int>(next(m), nums.end());
        
        TreeNode* root = new TreeNode(*m);
        root->left = sortedArrayToBST(l);
        root->right = sortedArrayToBST(r);
        return root;
    }
};
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
    vector<int> inorderTraversal(TreeNode* root) {
        if (!root) return {};

        auto ret = vector<int>{};

        auto l = inorderTraversal(root->left);
        ret.insert(ret.end(), l.begin(), l.end());

        ret.push_back(root->val);

        auto r = inorderTraversal(root->right);
        ret.insert(ret.end(), r.begin(), r.end());

        return ret;
    }
};
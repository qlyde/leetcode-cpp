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
    vector<int> preorderTraversal(TreeNode* root) {
        if (!root) return {};
        vector<int> pot{root->val};
        vector<int> l = preorderTraversal(root->left);
        vector<int> r = preorderTraversal(root->right);
        pot.insert(pot.insert(pot.end(), r.begin(), r.end()), l.begin(), l.end());
        return pot;
    }
};
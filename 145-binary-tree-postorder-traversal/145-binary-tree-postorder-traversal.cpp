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
    vector<int> postorderTraversal(TreeNode* root) {
        if (!root) return {};
        vector<int> post{root->val};
        vector<int> l = postorderTraversal(root->left);
        vector<int> r = postorderTraversal(root->right);
        post.insert(post.insert(post.begin(), r.begin(), r.end()), l.begin(), l.end());
        return post;
    }
};
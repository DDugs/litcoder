class Solution {
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return dfs(root).first;
    }

    pair<TreeNode*, int> dfs(TreeNode* root) {
        if (!root) {
            return {nullptr, 0};
        }
        auto [l, d1] = dfs(root->left);
        auto [r, d2] = dfs(root->right);
        if (d1 > d2) {
            return {l, d1 + 1};
        }
        if (d1 < d2) {
            return {r, d2 + 1};
        }
        return {root, d1 + 1};
    }
};
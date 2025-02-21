class FindElements {
    public:
        FindElements(TreeNode* root) {
                root->val = 0;
                        function<void(TreeNode*)> dfs = [&](TreeNode* root) {
                                    vis.insert(root->val);
                                                if (root->left) {
                                                                root->left->val = root->val * 2 + 1;
                                                                                dfs(root->left);
                                                                                            }
                                                                                                        if (root->right) {
                                                                                    root->right->val = root->val * 2 + 2;
                                                                                         dfs(root->right);
                                                                                                               }
                                                                                                       };
                                                                                                       dfs(root);

                                                                         }

                                                                  bool find(int target) {
                                                                                       return vis.count(target);
                                                                                                    }

                                                                                         private:
                                                                                                  unordered_set<int> vis;
                                                                                                       };

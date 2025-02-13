class Solution {
        
        private:
            int count;  
                int result ; 
                     void inOrder(TreeNode* node, int k) {
                             if (node == nullptr) return;
                                     inOrder(node->left, k);  // Visit left subtree
                                             count++;  // Visit this node
                                                     if (count == k) {
                                                                 result = node->val;
                                                                             return;
                                                                                     }
                                                                                             inOrder(node->right, k);  // Visit right subtree
                                                                                                 }
                                                                                                 public:
                                                                                                     int kthSmallest(TreeNode* root, int k) {
                                                                                                             count = 0;  
                                                                                                                     result = -1; 
                                                                                                                             inOrder(root, k);  
                                                                                                                                     return result;
                                                                                                                                         }

                                                                                                                                         };

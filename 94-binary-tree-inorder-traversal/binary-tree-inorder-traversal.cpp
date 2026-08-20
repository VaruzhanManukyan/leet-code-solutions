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
        std::vector<int> array{};
        std::stack<TreeNode*> stack_{};
        TreeNode* current = root;

        while (current != nullptr || !stack_.empty()) {
            while (current != nullptr) {
                stack_.push(current);
                current = current->left;
            }

            current = stack_.top();
            stack_.pop();

            array.push_back(current->val);
            
            current = current->right;
        }

        return array;
    }
};
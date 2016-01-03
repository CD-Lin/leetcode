/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL || (root->left == NULL && root->right == NULL))
            return root;
        TreeNode *tmp;
        tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        if(root->left != NULL)
            root->left = invertTree(root->left);
        if(root->right != NULL)
            root->right = invertTree(root->right);
        return root;
    }
};
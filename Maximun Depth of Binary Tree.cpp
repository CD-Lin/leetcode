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
    int getDepth(TreeNode* root, int level) {
        if(root == NULL) 
            return level;
        return max(getDepth(root->left, level + 1), getDepth(root->right, 				level + 1));
    }
    int maxDepth(TreeNode* root) {
        return getDepth(root, 0);
    }
};
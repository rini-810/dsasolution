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
    bool isSymmetric(TreeNode* root) {
        return sym(root->left,root->right);
    }
    bool sym(TreeNode* a,TreeNode* b){
        if(!a && !b)
            return true;
        if(!a || !b)
            return false;
        if(a->val != b->val)
            return false;
        return sym(a->right,b->left) && sym(a->left,b->right);
    }
};
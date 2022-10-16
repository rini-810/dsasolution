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
    bool isBalanced(TreeNode* root) {
        int val=depth(root);
        if(val==-1)
        {
            return false;
        }
        return true;
    }
    int depth(TreeNode* root){
        if(root==NULL)
            return 0;
        int a=depth(root->left);
        
        int b=depth(root->right);
        if(a==-1||b==-1){
            return -1;
        }
        if(abs(a-b)>1){
             return -1;
        }
        return max(a,b)+1;
            
        
    }
};
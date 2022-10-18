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
    int findSecondMinimumValue(TreeNode* root) {
        if(root==NULL)
            return -1;
        
        return mini(root,root->val);
    }
     int mini(TreeNode* root,int first){
         if(root==NULL)
             return -1;
         if(root->val!= first)  return root->val;
         int left= mini(root->left,first);
         int right= mini(root->right,first);
         if(left==-1)  return right;
         if(right==-1)   return left;
         
         return min(left,right);
         
     }
};
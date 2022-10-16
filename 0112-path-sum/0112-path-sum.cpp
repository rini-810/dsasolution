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
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        //bool ans;
       return path(root,targetSum,sum);
    }
    bool path(TreeNode* root,int targetSum,int sum){
        
        if(root==NULL)
            return false;
        sum+=root->val;
        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum)
            return true;
        }
        bool a=path(root->left,targetSum,sum);
        bool b=path(root->right,targetSum,sum);
        if(a==true||b==true)
            return true;
        else
            return false;
    }
};
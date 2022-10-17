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
    int diameterOfBinaryTree(TreeNode* root) {
        int ans[1];
        if(root->left!=NULL||root->right!=NULL){
        int val= diameter(root,ans);
        return ans[0];
        }
        else{
            return 0;
        }
    }
    int diameter(TreeNode* root,int max1[]){
        if(root==NULL)
            return 0;
        // if(root->left==NULL && root->right==NULL)
        //    return 1;
       // if(root!=NULL)
       //     return 1;
        int a=diameter(root->left,max1);
        int b=diameter(root->right,max1);
        max1[0]=max(max1[0],a+b);
         int ans=max(a,b)+1;
        return ans;
    }
};
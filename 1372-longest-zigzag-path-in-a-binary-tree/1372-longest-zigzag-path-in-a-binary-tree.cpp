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
    int ans=0;
    void rec(TreeNode* root, bool check, int step){
       if(!root){
           return;
       }
        ans=max(ans,step);
        if(check){
            rec(root->right,false,step+1);
            rec(root->left,true,1);    
        }
        else{
            rec(root->left,true,step+1);
            rec(root->right,false,1);
        }
    }
    int longestZigZag(TreeNode* root) {
       rec(root,true,0);
        return ans;
    }
};
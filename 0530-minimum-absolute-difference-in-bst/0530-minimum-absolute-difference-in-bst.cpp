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
    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        int min=INT_MAX;
        for(int i=0;i<=ans.size()-2;i++){
             if(ans[i+1]-ans[i]<min)
             min=ans[i+1]-ans[i];
        }
        return min;
    }
    void inorder(TreeNode* root,vector<int>& v){
        if(!root)  return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
};
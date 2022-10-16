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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s;
        path(root,s,ans);
        return ans;
    }
     void path(TreeNode* root,string s,vector<string> &ans){
if(root==NULL)
{
    return;
}
        if(root->left==NULL &&root->right==NULL){
            s=s+to_string(root->val);
            ans.push_back(s);
            return;
        }
         
        
        path(root->left,s+to_string(root->val)+"->",ans);
         path(root->right,s+to_string(root->val)+"->",ans);
    }
};
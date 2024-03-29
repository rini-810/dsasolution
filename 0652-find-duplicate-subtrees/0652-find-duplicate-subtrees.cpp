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
    unordered_map<string,int> map;
    string solve(TreeNode* root,vector<TreeNode*>& res){
        if(!root)  return "#";
        string s= solve(root->left,res)+','+solve(root->right,res)+','+to_string(root->val);
        map[s]++;
        if(map[s]==2)  res.push_back(root);
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> res;
        solve(root,res);
        return res;
    }
    
};
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
    void number(TreeNode* root,string num,vector<string>& s){
        if(!root)
            return;
        num = num+to_string(root->val);
        if(!root->left && !root->right){
            s.push_back(num);
            return;
        }
        
        number(root->left,num,s);
        number(root->right,num,s);
        
        
    }
    int sumNumbers(TreeNode* root) {
        vector<string> s;
        string num;
        number(root,num,s);
        int sum=0;
        for(int i=0;i<s.size();i++){
            sum+=stoi(s[i]);
        }
        return sum;
    }
};
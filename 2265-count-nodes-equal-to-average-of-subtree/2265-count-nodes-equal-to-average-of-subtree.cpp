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
    int averageOfSubtree(TreeNode* root) {
       int count=0;
        average(root,count);
        return count;
    }
    
    pair<int,int> average(TreeNode* root,int& count){
        if(root==NULL) return {0,0};
        auto p1=average(root->left,count);
        auto p2=average(root->right,count);
        int avg=(root->val+p1.first+p2.first)/(p1.second+p2.second+1);
        if(avg==root->val) count++;
        return {root->val+p1.first+p2.first,p1.second+p2.second+1};
        
    }
   
};
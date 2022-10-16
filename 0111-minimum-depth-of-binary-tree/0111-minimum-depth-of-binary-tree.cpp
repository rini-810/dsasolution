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
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int count=0;
        return levelorder(root,count);
    }
    int levelorder(TreeNode* root,int count){
        queue<TreeNode*> q;
        q.push(root);
        int a;
        while(!q.empty()){
            int size=q.size();
            while(size!=0){
            TreeNode* temp=q.front();
            q.pop();
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
                if(temp->left==NULL && temp->right==NULL){
                     a=count+1;
                    return a;
                }
                size--;
            }
            count++;
        }
        return count;
    }
};
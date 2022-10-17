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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;
        if(root!=NULL){
        q.push(root);
        //ans.push_back(root->val);
        }
        while(!q.empty()){
            int size=q.size();
            while(size!=0){
                TreeNode* temp=q.front();
                q.pop();
                if(size==1){
                    ans.push_back(temp->val);
                }
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
                // if(temp->right==NULL && temp->left!=NULL)
                //     ans.push_back(temp->left->val);
                size--;
                
            }
        }
        return ans;
    }
    
};
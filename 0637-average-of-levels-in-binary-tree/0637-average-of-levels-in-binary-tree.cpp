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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(root==NULL)
            return ans;
     queue<TreeNode*> q;
        q.push(root);
        int count=0;
        while(!q.empty()){
              int size=q.size();
            double sum=0;
            double n=size;
            while(size!=0){
              TreeNode* temp=q.front();
            q.pop();
                sum+=temp->val;
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
                size--;
            }
            
            double avg=sum/n;
            ans.push_back(avg);
            
        }
        return ans;
    }
};
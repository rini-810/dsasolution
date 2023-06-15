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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level=1;
        int ans;
        int sum=INT_MIN;
        while(!q.empty()){
            int size=q.size();
            int s=0;
           while(size!=0){
               TreeNode* temp=q.front();
               q.pop();
               s+=temp->val;
               if(temp->left){
                   q.push(temp->left);
               }
               if(temp->right){
                   q.push(temp->right);
               }
               size--;
           }
            if(s>sum){
                sum=s;
                ans=level;
            }
            level++;
        }
        
        return ans;
    }
};
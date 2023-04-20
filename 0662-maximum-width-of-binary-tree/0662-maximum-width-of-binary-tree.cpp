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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        int ans=1;
        while(!q.empty()){
            int s=q.size();
            int start=q.front().second;
            int end=q.back().second;
            ans=max(ans,end-start+1);
            while(s!=0){
                pair<TreeNode*,int> p=q.front();
                q.pop();
                
                int idx=p.second-start;
                
                if(p.first->left){
                    q.push({p.first->left,(long long) 2*idx+1});
                }
                if(p.first->right){
                    q.push({p.first->right,(long long)2*idx+2});
                    
                }
                s--;
            }
        }
        return ans;
    }
};
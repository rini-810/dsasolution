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
    int sumRootToLeaf(TreeNode* root) {
        string s;
        int sum=0;
        str(root,s,sum);
        return sum;
    }
    int todecimal(string s){
        int end=s.size()-1;
        int base=1;
        int value=0;
         for(int i=end;i>=0;i--){
             if(s[i]=='1'){
                 value += base;
             }
             base=base*2;
         }
          return value;  
        }
    
    void str(TreeNode* root,string s,int& sum){
        if(root==NULL){
           return;
        }
        if(root->left==NULL && root->right==NULL){
            s += to_string(root->val);
            sum += todecimal(s);
            return;
            
        }
        // if(root!=NULL)
        //     s += to_string(root->val);
        str(root->left,s+to_string(root->val),sum);
        str(root->right,s+to_string(root->val),sum);
        
    }
};
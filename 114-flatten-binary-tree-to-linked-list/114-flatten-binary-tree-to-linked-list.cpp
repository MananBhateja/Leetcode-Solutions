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
     void func(TreeNode *root, TreeNode * &prev){
         
         
         if(root == NULL) return ;
         
         func(root->right,prev);
         func(root->left,prev);
         
         root->right=prev;
         root->left =NULL;
         prev=root;
          
     }
    
    
    
    void flatten(TreeNode* root) {
        
        TreeNode * prev= NULL;
        
        return func(root ,prev);
    }
};
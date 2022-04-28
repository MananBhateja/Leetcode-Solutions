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
    bool func(TreeNode* root, int cs, int targetSum){
        
        if(root == NULL) return false;
        
        if( !root->left and !root->right){
           
            if(cs +root->val == targetSum)
                return true;
            else
                return false;
            
        }
        
        return func(root->left,cs+root->val,targetSum) or func(root->right,cs+root->val,targetSum) ;
        
        
    }
    
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        int cs=0;
      return   func(root,cs,targetSum);
        
        
    }
};
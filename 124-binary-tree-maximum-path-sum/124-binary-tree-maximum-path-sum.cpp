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
    int mx_sum=INT_MIN;
    int msp(TreeNode* root){
        
      if(root == NULL)
          return INT_MIN;
        
        int ls=msp(root->left);
        int rs=msp(root->right);
        
        int ans=root->val;
        
        if(ls >0 ) ans+=ls;
        
        if(rs > 0) ans+=rs;
        
        mx_sum = max(mx_sum ,ans);
        
        return root->val + max(0,max(ls,rs));
        
        
    }
    
    
    int maxPathSum(TreeNode* root) {
        
        msp(root);
        return mx_sum;
    }
};
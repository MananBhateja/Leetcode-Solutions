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
    
    int sum=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        if(root == NULL) return 0;
        
        int flag=0;
        if(root->val >= low and  root->val <= high ){
          flag=1;
            
        }
        
       int ls= rangeSumBST(root->left,low,high);
        int rs=rangeSumBST(root->right,low,high);      
       if(flag)
           return ls+rs+root->val;
        else
            return ls+rs;
    }
};
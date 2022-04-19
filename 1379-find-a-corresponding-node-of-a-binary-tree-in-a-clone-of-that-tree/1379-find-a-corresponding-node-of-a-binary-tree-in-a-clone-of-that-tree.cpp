/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    unordered_map<TreeNode*,int>h;
    
//     void inord(TreeNode* original,TreeNode* cloned, TreeNode* target){
        
//         if(original == NULL) return ;
        
//         inord(original->left, cloned, target);
        
//         h[original]++;
        
//         inord(original->right,cloned,target);
        
        
//     }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        if(original == NULL) return NULL;
        
        if(original == target) return cloned;
        
        TreeNode* left =getTargetCopy(original->left,cloned->left,target);
        
        if(left == NULL)
            return getTargetCopy(original->right,cloned->right,target);
            
         else
             return left;
    }
};
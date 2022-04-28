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
    TreeNode* find(TreeNode* root , int x){
        
        if(root == NULL) return root;
        
        if(root->val == x) return root;
        
        TreeNode* l=find(root->left,x);
        TreeNode* r= find(root->right,x);
        
        return (l == NULL ? r: l );
        
        
    }
    
    int count(TreeNode* root){
        if(root == NULL) return 0;
        
    return count(root->left)+count(root->right)+1;
        
    }
    
    
    
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        
        
        // find node
        TreeNode* t= find(root,x);
        
        int leftn=count(t->left);
        int rightn=count(t->right);
        
        int rem=n-(leftn+rightn)-1;
        
        if(leftn > rem+rightn) return true;
        
        if(rightn > rem+leftn) return true;
        
        if(rem > leftn +rightn) return true;
        
        return false;
        
    }
};
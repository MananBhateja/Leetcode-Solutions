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
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        
        if(root == NULL) return root;
        
        if(root->val > key){
            root->left=deleteNode(root->left,key);
        }
        else if(root->val < key){
            root->right = deleteNode(root->right,key);
        }
        else{
            
            if( root->left == NULL and root->right == NULL) {
                delete root;
                return NULL;
            }
            else if(root ->left == NULL and root->right){
                TreeNode* temp= root->right;
                delete root;
                return temp;
                
            }
            else if(root ->left  and root->right== NULL){
                TreeNode* temp= root->left;
                delete root;
                return temp;
                
            }
            
            else{
                
                TreeNode* replace=root->right;
                
                while(replace->left!=NULL){
                    
                    replace=replace->left;
                }
                swap(replace->val,root->val);
                
                root->right=deleteNode(root->right,key);
                
                
            }
        }
        return root;
    }
};
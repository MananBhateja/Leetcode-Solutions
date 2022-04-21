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
    vector<vector<int>>ans;
    
    int height(TreeNode* root){
        
        if(root == NULL) return 0;
        
        int lh=height(root->left);
        int rh=height(root->right);
        
        return max(lh,rh)+1;
    }
    
    void printkthlevel(TreeNode* root, int k,vector<int>&v){
        
        if(root == NULL)
            return ;
        
            if(k==1){
                v.push_back(root->val);
            }
        printkthlevel(root->left,k-1,v);
        printkthlevel(root->right,k-1,v);
        
    }
    
    void printlevels(TreeNode* root){
        
        int h=height(root);
        
        for(int i=h;i>=1;i--){
            vector<int>v;
        printkthlevel(root,i,v);
            ans.push_back(v);
            
        }
        
        return ;
    }
    
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        printlevels(root);
        
        return ans;
    }
};
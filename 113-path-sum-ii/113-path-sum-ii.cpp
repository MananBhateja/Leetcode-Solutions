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
    
    void func(TreeNode * root, int target,vector<int>&v, vector<vector<int>>&ans){
        if(root == NULL) return ;
        
        if(root and root->left== NULL and root->right == NULL){
            
            if(target == root->val)
            {
                v.push_back(root->val);
                ans.push_back(v);
                v.pop_back();
                
            }
            return ;
            
            
        }
        
        v.push_back(root->val);
        func(root->left,target-root->val,v,ans);
        
        func(root->right,target-root->val,v,ans);
        
        v.pop_back();
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        
        
    
        vector<int>v;
        vector<vector<int>>ans;
        
        if(root == NULL) return ans;
        
        func(root,target,v,ans);
        return ans;
    }
};
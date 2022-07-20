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
    
    void func(TreeNode *root, int target, vector<vector<int>>&ans,vector<int>v){
        
        if(root == NULL) return ;
        
        if(root and !root->left and !root->right)
        {
            
            if(target == root->val){
           v.push_back(root->val);
                ans.push_back(v);
                cout<<"yrha"<<endl;
               v.pop_back();
                
                
            } 
            
            return ;
            
        }
        
        v.push_back(root->val);
        
        func(root->left,target-root->val,ans,v);
//         v.pop_back();
        
//         v.push_back(root->val);
        
        func(root->right,target-root->val,ans,v);
        v.pop_back();
        
       // return ;
    }
    
    
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>>ans;
        if(root == NULL) return ans;
        
        vector<int>v;
         func(root,targetSum,ans,v);
        
        return ans;
    }
};
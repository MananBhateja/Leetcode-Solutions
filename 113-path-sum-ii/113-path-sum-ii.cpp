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
 void ps(TreeNode* root, int targetSum,int cs,vector<int>v){
        
        if(root == NULL) return ;
        cs+=root->val;
        v.push_back(root->val);
        if(!root->left and !root->right){
            
            if(cs == targetSum)
                ans.push_back(v);
        }
        
        ps(root->left,targetSum,cs,v);
        
        ps(root->right,targetSum,cs,v);
        
        v.pop_back();
        return ;
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
     
        vector<int>v;
        if(root == NULL) return ans;
        int cs=0;
        ps(root,targetSum,cs,v);
        
        return ans;
        
    }
};
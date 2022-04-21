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
    vector<int>ans;
    void right(TreeNode* root,int level, int &maxlevel){
        
        // base case
        
        if(root == NULL) return ;
        
        //recursive case
        
        if(level > maxlevel){
            ans.push_back(root->val);
            maxlevel=level;
        }
        
        right(root->right,level+1,maxlevel);
        right(root->left,level+1,maxlevel);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        
        int maxlevel=0;
        right(root,1,maxlevel);
        
        return ans;
    }
};
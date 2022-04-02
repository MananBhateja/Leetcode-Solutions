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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
       vector<int>v;
        vector<vector<int>>ans;
        
        if(root == NULL) return ans;
        
        if(root!= NULL ){
            if(root->left==NULL and root->right == NULL) {
                v.push_back(root->val);
                ans.push_back(v);
                return ans;
            }
        }
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            
            TreeNode* x=q.front();
            q.pop();
            
            if(x == NULL){
                ans.push_back(v);
                v.clear();
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                v.push_back(x->val);
                if(x->left!=NULL)
                    q.push(x->left);
                if(x->right!=NULL)
                    q.push(x->right);
            }
        }
        return ans;
    }
};
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
    queue<int>q;
    
    TreeNode* func (TreeNode* root){
        
        if(q.size() ==1 ) 
        {TreeNode* k =new TreeNode(q.front());
         
         return k;}
         
        TreeNode* r= new TreeNode(q.front());
        q.pop();
        
        root->left=NULL;
        root->right=r;
        
        func(root->right);
        
        return root;
    }
    
    void inord(TreeNode* root){
        
        if(root == NULL) return ;
        
        inord(root->left);
        
        q.push(root->val);
        
        inord(root->right);
        
    }
    
    
    TreeNode* increasingBST(TreeNode* root) {
        
        if(root == NULL or  (root->left == NULL and root->right == NULL )) return root;
        
        inord(root);
        q.push(-1);
TreeNode* r= new TreeNode(q.front());
        q.pop();
      return  func(r);
        
    }
};
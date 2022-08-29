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
    
    TreeNode* create(vector<int>in,int is,int ie, vector<int>post,int ps, int pe, map<int,int>&h){
        
        
        if(ps > pe or is >ie)
            return NULL;
        
        TreeNode *root=new TreeNode(post[pe]);
        
        int inroot=h[post[pe]];
        
        int numsleft= inroot -is;
        
        root->left=create(in,is,inroot-1,post,ps,ps+numsleft-1,h);
        
        root->right=create(in,inroot+1,ie,post,ps+numsleft,pe-1,h);
        
        return root;
        
        
    }
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        if(inorder.size() != postorder.size())
            return NULL;
        
        map<int,int>h;
        for(int i=0;i<inorder.size();i++)
            h[inorder[i]]=i;
        
       return  create(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,h);
        
    }
};
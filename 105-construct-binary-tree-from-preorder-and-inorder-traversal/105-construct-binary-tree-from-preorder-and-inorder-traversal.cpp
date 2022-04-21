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
    int i=0;
TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
    return create(preorder,inorder,0,inorder.size() - 1);
}
TreeNode* create(vector<int>& preorder, vector<int>& inorder,int s, int e){
    //base case
    if(s > e){
        return NULL;
    }
    
    // recurisve case
    TreeNode* root=new TreeNode(preorder[i]);
    i++;
    int k;
    for(int j=s;j<=e;j++){
        if(inorder[j]==root->val){
            k=j;
            break;
        }
    }
    root->left =create(preorder, inorder,s,k-1);
    root->right =create(preorder, inorder, k+1,e);
    return root;
}
};
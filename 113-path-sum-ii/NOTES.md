/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode() : val(0), left(nullptr), right(nullptr) {}
*     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
*     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
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
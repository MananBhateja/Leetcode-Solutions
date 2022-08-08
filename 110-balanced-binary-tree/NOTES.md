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
pair<int,bool> help(TreeNode* root)
{
pair<int,bool>p;
if(root == NULL){
p.first=0;
p.second=true;
return p;
}
pair<int,bool> left =help(root->left);
pair<int,bool> right =help(root->right);
p.first=max(left.first , right.first)+1;
if( abs(left.first - right.first) <= 1 and left.second and right.second ){
p.second = true;
}
else
p.second= false;
return p;
}
bool isBalanced(TreeNode* root) {
if(root == NULL) return true;
return help(root).second;
}
};
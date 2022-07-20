void func(TreeNode* root){
vector<int>v;
queue<TreeNode*>q;
q.push(root);
q.push(NULL);
while(!q.empty()){
TreeNode* x = q.front();
q.pop();
​
if( x== NULL){
if(clevel %2 == 0){
ans.push_back(v);
}
else{
ans.push_back(rev(v));
}
clevel++;
if(!q.empty()){
q.push(NULL);
}
while(!v.empty()){
v.pop_back();
}
}
else{
v.push_back(x->val);
if(x->left != NULL)
q.push(x->left);
if(x->right != NULL)
q.push(x->right);
}
}
}
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
if(root == NULL){
return ans;
}
func(root);
return ans;
}
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
    vector<int> t;
 void inO(TreeNode* root) {
        if (!root)
            return;
        inO(root->left);
        t.push_back(root->val);
        inO(root->right);
    }
   /// tree inorder
    bool isValidBST(TreeNode* root) {
        if (!root)
            return true;
        
        inO(root);
        for (int i=1; i<t.size(); i++)
            if (t[i] <= t[i-1])
                return false;
        return true;
    }
};
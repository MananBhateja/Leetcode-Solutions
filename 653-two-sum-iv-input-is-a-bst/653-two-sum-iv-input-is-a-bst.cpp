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
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> elements;
        return f(root,k,elements);
        
    }
    bool f(TreeNode* root,int k,unordered_set<int>& elements){ 
        if(root==NULL){
            return false;
        }
        if(elements.count(k-root->val)){
            return true;
        }
        elements.insert(root->val);
        return f(root->left,k,elements) || f(root->right,k,elements);
    }
};
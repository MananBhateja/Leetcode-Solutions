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
    
    
    vector<string >v;
    void traversal(TreeNode* root,string a){
        if( root == NULL) return ;
        
        a+=to_string(root->val);
        
        if(root->left== NULL and root->right == NULL) 
            v.push_back(a);
        
        traversal(root->left,a);
        
        traversal(root->right,a);
        
        a.pop_back();
        
        return ;
        
        
        
    }
    
    
    int sumNumbers(TreeNode* root) {
        
        if(root->left == NULL and root->right == NULL) return root->val;
       string a="";
        traversal(root,a);
        int ans=0;
        for(auto x: v){
          ans+=stoi(x);  
        }
        //cout<<endl;
        return ans;
    }
};
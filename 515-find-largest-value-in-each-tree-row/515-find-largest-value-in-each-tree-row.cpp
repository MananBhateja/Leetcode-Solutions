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
    vector<int> largestValues(TreeNode* root) {
        vector<int>v;
        if(root == NULL) 
            return v;
        
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<int>a;
        while(!q.empty()){
            
            TreeNode* x= q.front();
            q.pop();
            
            if( x== NULL){
                sort(a.begin(),a.end());
                v.push_back(a[a.size()-1]);
                
                if(!q.empty())
                    q.push(NULL);
                
                while(!a.empty()){
                    a.pop_back();
                    
                }
                
                
                
            }
            else{
                a.push_back(x->val);
                
                if(x->left!=NULL)
                    q.push(x->left);
                if(x->right!=NULL)
                    q.push(x->right);
                
                
            }
            
        }
        return v;
    }
};
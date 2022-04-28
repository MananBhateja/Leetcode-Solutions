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
    int clevel=0;
    vector<vector<int>>ans;
    
    vector<int> rev(vector<int>v){
        
        vector<int>x;
        
        for(int i=v.size()-1;i>=0;i--){
            
        x.push_back(v[i]);
            
        }
        return x;
        
    }
    
    
 void func(TreeNode* root){
        
        vector<int>v;
    
            queue<TreeNode*>q;
            q.push(root);
            q.push(NULL);
        
        while(!q.empty()){
            
            TreeNode* x = q.front();
            q.pop();

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
};
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
    unordered_map<int,int>h;
    void inord(TreeNode* root){
        
        if(root == NULL) return ;
        
        inord(root->left);
        
        h[root->val]++;
        
        inord(root->right);
        
        
    }
    
    
    vector<int> findMode(TreeNode* root) {
        
        inord(root);
        vector<int>ans;
        
        
            int mx=INT_MIN;
            for(auto x: h){
            if(x.second > mx)
            {   mx= x.second;
                 //ans.push_back(x.first);
            }
        }
        
        for(auto x :h){
            
            if( mx >1 and x.second == mx)
                ans.push_back(x.first);
        }
        
            
            if(ans.size() == 0){
                for(auto x : h){
                    ans.push_back(x.first);
                }
            }
            
        
        return ans;
        }
};
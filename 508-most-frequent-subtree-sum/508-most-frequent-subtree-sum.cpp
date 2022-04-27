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
    vector<int>ans;
    unordered_map<int,int>h;
    int sum(TreeNode* root){
        
        if(root == NULL) return 0;
        
        return root->val+sum(root->left)+sum(root->right);
        
        
    }
    
  void func(TreeNode* root){
        
        if(root == NULL) return ;
        
       h[sum(root)]++;
        func(root->left);
        func(root->right);
        return ;
    }
    
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        
       func(root);
        int mx=INT_MIN;
        for(auto x:h){
           
            mx=max(mx,x.second);
            
        }
        
        for(auto x : h){
            
            if(x.second > 1 and mx == x.second)
                ans.push_back(x.first);
        }
        if(ans.size() == 0){
            for(auto x:h){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
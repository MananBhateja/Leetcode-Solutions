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
    void pre(TreeNode* root, set<int>&ans){
        
        if(root == NULL) return ;
        
        
        ans.insert(root->val);
        pre(root->left,ans);
        
        pre(root->right,ans);
        
    }
    
    
    
    int findSecondMinimumValue(TreeNode* root) {
        
        set<int>ans;
        
        pre(root,ans);
        
        //sort(ans.begin(),ans.end());
        
        if(ans.size() == 1) return -1;
        else
        {   int cnt=0;
            for(auto x: ans){
               
                cnt++;
                if(cnt == 2)
                    return x;
                
            }
        }
        
        return 0;
    }
};
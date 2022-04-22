/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int>ans;
    
    void printlevel(TreeNode* root , int k){
        
        if(root == NULL) return ;
        
        if(k == 0)
            ans.push_back(root->val);
        
        printlevel(root->left,k-1);
        printlevel(root->right,k-1);
        
    }
    
    
    int kdis(TreeNode* root, TreeNode* target, int k){
        
        if(root == NULL) return -1;
        
        if(root == target){
            printlevel(target,k);
            return 0;
        }
        
        int dl=kdis(root->left,target,k);
        
        if(dl != -1){
            
            
            if(dl+1 == k)
                ans.push_back(root->val);
            else
                printlevel(root->right,k-2-dl);
            
            return 1+dl;
        }
        
        int dr=kdis(root->right,target,k);
        
        if(dr != -1){
            
            
            if(dr+1 == k)
                ans.push_back(root->val);
            else
                printlevel(root->left,k-2-dr);
            
            return 1+dr;
        }
        
        return -1;
    }
    
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
       int x= kdis(root,target,k);
        
        return ans;
        
        
    }
};
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
    
    void inord(TreeNode * root,vector<int>&v){
        
        if(root == NULL) return ;
        
        inord(root->left,v);
        v.push_back(root->val);
        inord(root->right,v);
    }
    
    
    void ino2(TreeNode* &root, vector<int>&v,int &i){
        
        if(root == NULL)
            return ;
        
        ino2(root->left,v,i);
        
        if(root->val != v[i]){
            root->val=v[i];
            
        }
        i++;
        
        
        ino2(root->right,v,i);
        
    }
    
    void recoverTree(TreeNode* root) {
        
        vector<int>v;
        inord(root,v);
        
        // int i=1,j=v.size()-2;
        
        
//         for(int i=0;i<v.size()-1;i++){
            
//             if(v[i] > v[i+1])
            
//         }
        
        sort(v.begin(),v.end());
        
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
        
        int i=0;
        ino2(root,v,i);
    }
};
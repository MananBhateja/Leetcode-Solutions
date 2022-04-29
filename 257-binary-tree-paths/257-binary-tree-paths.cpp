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
    
    vector<string>ans;
    void addinstring(vector<int>v){
        
        string a="";
        
        if(v.size()==1)
            a+=to_string(v[0]);
        else{
            int cnt=0;
            for(auto x: v){
                a+=to_string(x);
                cnt++;
                if(cnt < v.size())
                a+="->";
            }
            
        }
        cout<<a<<endl;
            ans.push_back(a);
        
    }
    
    
    
    
 void func(TreeNode * root,vector<int>v){
        
        if(root == NULL) return ;
        
        v.push_back(root->val);
        if(!root->left and !root->right){
            addinstring(v);
        }
        
        func(root->left,v);
        
        func(root->right,v);
        
        v.pop_back();
        return ;
        
        
    }
    
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<int>v;
        func(root,v);
        return ans;
        
    }
};
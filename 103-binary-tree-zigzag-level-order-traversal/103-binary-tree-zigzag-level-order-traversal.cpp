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
    
    vector<int>rev(vector<int>v){
        
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
        reverse(v.begin(),v.end());
         for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
        
    return v;}
    
    void func(TreeNode * root,int &clevel, vector<vector<int>>&ans){
        
        vector<int>v;
        queue<TreeNode * >q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            
            
            TreeNode * x=q.front();
            q.pop();
            
                if(x == NULL){

                    if(clevel %2 == 0)
                        ans.push_back(v);
                    else 
                        ans.push_back(rev(v));

                    clevel++;

                    if(!q.empty())
                        q.push(NULL);

                    while(!v.empty())
                        v.pop_back();
                }
            
                else{

                    v.push_back(x->val);

                    if(x->left)
                        q.push(x->left);

                    if(x->right)
                        q.push(x->right);

                }
            
            
         }
    }   
    
    
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(root == NULL) return ans;
        
        int clevel=0;
        
         func(root,clevel,ans);
        
        return ans;
        
    }
};
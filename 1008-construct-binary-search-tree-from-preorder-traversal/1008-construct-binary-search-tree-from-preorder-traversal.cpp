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
    int i=0;
    TreeNode * buildbst(vector<int>pre,vector<int>in,int s, int e){
        
        
        if(s > e) return NULL;
        
        
        int d=pre[i];
        i++;
        
        TreeNode * root=new TreeNode(d);
        int k=-1;
        
        for(int j=s;j<=e;j++){
            
            if(in[j] == d){
                k=j;
                break;
            }
        }
        
        root->left=buildbst(pre,in,s,k-1);
        root->right=buildbst(pre,in,k+1,e);
        
         return root;   
    }
    
    
    
    TreeNode* bstFromPreorder(vector<int> preorder) {
        
        vector<int>in;
        in=preorder;
        
        sort(in.begin(),in.end());
        
        for(auto x: in){
            cout<<x<<" ";
        }
        
        cout<<endl;
        for(auto x:preorder){
            cout<<x<<" ";
        }
        cout<<endl;
        
        
        int s=0,e=preorder.size()-1;
      return  buildbst(preorder,in,s,e);
        
        
    }
};
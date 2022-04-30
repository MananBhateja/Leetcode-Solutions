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
    
    int depth(TreeNode * root){
        
        int count=0;
        while(root->left){
            root=root->left;
            
            count++;
        }
        return count;
    }
    
    bool check(TreeNode * root,int indx, int d){
        
        
        int l=1;
        int r=pow(2,d);
        int pivot=0;
        
        for(int i=0;i<d;i++){
            
            pivot=(l+r)/2;
            if(indx <= pivot){
                root=root->left;
                r=pivot;
                
            }
            else{
                root=root->right;
                l=pivot+1;
            }
        }
        if(root == NULL) return false;
        
        return true;
        
    }
    
    
    
    
    int countNodes(TreeNode* root) {
        
        if( root == NULL) return 0;
        
        int d=depth(root);
        cout<<d<<endl;
        
        if(d==0) return 1;
        
        int left=1,right=pow(2,d);
        int n=0;
        
        while(left <=right){
            
            int pivot=(left+right)/2;
            if(check(root,pivot,d)){
                left=pivot+1;
                n=pivot;
            }
            else{
                right=pivot-1;
            }
            
        }
        
        return pow(2,d)-1+n; // we have considered level1 as depth=0
        
    }
};
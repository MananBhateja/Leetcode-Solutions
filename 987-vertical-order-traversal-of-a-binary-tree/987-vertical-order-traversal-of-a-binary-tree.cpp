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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        vector<vector<int>>ans;
        
        queue<pair<TreeNode *,pair<int,int>>> todo;
        
        todo.push({root,{0,0}});
        
        while(!todo.empty()){
            
        auto p=  todo.front();
            todo.pop();
            TreeNode *node=p.first;
            
            int x=p.second.first,y=p.second.second;
            nodes[x][y].insert(node->val);
            
            if(node ->left)
                todo.push({node->left,{x-1,y+1}});
            
            if(node->right)
                todo.push({node->right,{x+1,y+1}});
            
        }
            for(auto p:nodes){
                
                vector<int>col;
                
                for(auto q:p.second){
                    col.insert(col.end(),q.second.begin(),q.second.end());
                    
                }
                ans.push_back(col);
            }
        
        for(auto p:nodes){
            
            cout<<p.first<<" ";
            for(auto q:p.second){
                cout<<q.first<<" ";
                
                for(auto x:q.second){
                    cout<<"node"<<x<<" ";
                }
                cout<<endl;
            }
        }
        
           
        
        return ans;
    }
};
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL) return NULL;
        queue<Node *>q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            
            Node* x=q.front();
            q.pop();
            if(x == NULL){
                //x->next=NULL;
                if(!q.empty()){
                    //x->next=NULL;
                    q.push(NULL);
                }
            }
            else{
                x->next=q.front();
                cout<<x->val<<" ";
                if(x->left!=NULL)
                    {q.push(x->left);}
                
                if(x->right!=NULL)
                    q.push(x->right);
            }
        }
        return root;
    }
};
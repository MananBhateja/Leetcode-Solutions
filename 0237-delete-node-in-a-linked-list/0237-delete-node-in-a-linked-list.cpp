/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
     
        ListNode* temp =node->next;
        
        
        while(temp->next != NULL){
            
            swap(temp->val,node->val);
            node=node->next;
            temp=temp->next;
        }
        
        swap(temp->val,node->val);
        
        delete temp;
        node->next=NULL;
        
        

    }
};
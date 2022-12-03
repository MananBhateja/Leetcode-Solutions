/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode* func( ListNode *head,int val){
        
       if(head == NULL )
            return head;
        
        head->next=func(head->next,val);
            
        
        if(head->val == val)
            return head->next;
        else
            return head; 
        
        
    }
    
    ListNode* removeElements(ListNode* head, int val) {
        
        
        if(head == NULL )
            return head;
        
        else if(head->next == NULL and head->val == val)
            return NULL;
        else if(head->next == NULL and head->val != val)
            return head;
        else
            return func(head,val);
        
    }
};
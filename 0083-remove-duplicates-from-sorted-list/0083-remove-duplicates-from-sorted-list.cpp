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
    
    ListNode* func(ListNode* head){
        
        if(head->next == NULL) return head;
        
       ListNode* rh =func(head->next); 
        if(head->val == rh->val )
            return rh;
        else 
        {
            head->next=rh;
            return head;
        }
    }
    
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == nullptr or  head->next == nullptr)
            return head;
        
        
        return func(head);
        
    }
};
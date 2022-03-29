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
    ListNode* check(ListNode* head , int val){
        
        if(head == NULL ) return head;
        
        if(head->next == NULL and head->val == val){
            head=head->next;
            return head;
        }
        if(head->next == NULL and head->val!= val) return head;
        
        
        while(head!=NULL and head->val==val){
            head=head->next;
        }
        return head;
        
    }
    
    
    
    
    
    
    ListNode* removeElements(ListNode* head, int val) {
        
       if(head == NULL ) return head;
        
        if(head->next == NULL and head->val == val){
            head=head->next;
            return head;
        }
        
         if(head->next == NULL and head->val!= val) return head;
        
        
        ListNode* temp =head;
        ListNode* n=head;
        
        while(temp!=NULL){
            
            if(head== temp and temp->val ==val){
                head=check(head,val);
            }
            else if(temp->val ==val){
                n->next=check(temp,val);
            }
            
            n=temp;
            temp=temp->next;
        }
        return head;
    }
};
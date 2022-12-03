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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)return NULL;
        
     ListNode*c=head;
         ListNode* prev=NULL;
         ListNode* n=NULL;
        
        while(c!=NULL){
            n=c->next;
            c->next=prev;
            prev=c;
            c=n;
        }
        return prev;
    }
    
    
    void print(ListNode *head){
        
        while(head){
            
            cout<<head->val<<" ";
            head=head->next;
            
        }
        cout<<endl;
        
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL or head->next == NULL ) return true;
     
        
        ListNode *slow=head,*fast=head->next;
        
        while(fast!=NULL and fast->next!= NULL){
            
            
            slow=slow->next;
            fast=fast->next->next;
        }
        
        
        slow->next=reverseList(slow->next);
        
        ListNode *temp=head,*mid =slow->next;
        
        
        while(mid != NULL){
            
            if(mid->val != temp->val)
                return false;
            mid=mid->next;
            temp=temp->next;
            
        }
        print(head);
        slow->next=reverseList(slow->next);
        print(head);
        return true;
    }
};
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
    void reorderList(ListNode* head) {
        if(head == NULL or head->next==NULL or head->next->next == NULL) return ;
        
        stack<ListNode*>s;
        
        ListNode* temp=head;
        
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            s.push(temp);
            temp=temp->next;
        }
        ListNode* n=head;
        for(int i=0;i<cnt/2;i++){
            
            ListNode* e =s.top();
            s.pop();
            
            e->next=n->next;
            n->next=e;
            
            n=n->next->next;
            
        }
        n->next=NULL;
        
        
    }
};
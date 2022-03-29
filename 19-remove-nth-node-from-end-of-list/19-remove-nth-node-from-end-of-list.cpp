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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //if(head=NULL) return NULL;
        
        if(head->next==NULL) {
            ListNode * d=head;
            delete d;
            return NULL;
        }
        
        int cnt=0;
         ListNode* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        
         ListNode* n1=head;
        
        if(cnt==n){
           
            head=head->next;
             delete n1;
            return head;
            
        }
        
       for(int i=1;i<cnt-n;i++){
           //cout<<n1->val<<endl;
           n1=n1->next;
           
       }
       // cout<<"last"<<n1->val;
         ListNode* r =n1->next;
        n1->next=r->next;
        delete r;
        return head;
        
    }
};
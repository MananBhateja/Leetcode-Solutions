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
    ListNode *reverse(ListNode* head){
        
        ListNode* c=head;
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
    
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
                // l1=reverse(l1);
                // l2=reverse(l2);
                int c=0;
                ListNode* h3=NULL;
                while(l1!=NULL or l2!=NULL)
                {
                    int sum=c;
                    if(l1!=NULL )
                    {
                        sum+=l1->val;
                        l1=l1->next;
                    }
                    if(l2!=NULL){
                        sum+=l2->val;
                        l2=l2->next;
                    }
                  ListNode* temp= new ListNode(sum%10);
                    temp->next=h3;
                     h3 = temp; 

                    c = sum / 10; 


                } 
                    if(c != 0) 

                    { 

                   ListNode* temp = new ListNode(c); 

                    temp->next = h3;
                    h3 = temp; 

                    } 
                h3=reverse(h3);
                return h3;

        
       
    }
};
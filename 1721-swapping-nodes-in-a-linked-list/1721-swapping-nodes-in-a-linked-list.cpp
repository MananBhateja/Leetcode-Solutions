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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL) return NULL;
        
        
        
        ListNode* temp=head;
        int cnt=0;
        while(temp->next!=NULL){
            
          cnt++;
            temp=temp->next;
            
        }
        cnt++;
        if(cnt == k){
            swap(head->val,temp->val);
            return head;
        }
        
        cout<<cnt<<endl;
        ListNode* n=head ;
        ListNode* m=head;
        
        for( int i=1;i<k;i++){
            n=n->next;
        }
        for(int i=1;i<=cnt-k;i++){
            
           
            
            m=m->next;
                         
        }
        
//         for(int i=1;i<k;i++){
//             n=n->next;
//         }
        
//         for(int i=1;i<=cnt-k;)
        cout<<n->val<<endl;
        cout<<m->val<<endl;
//         //cout<<n->next->next->val
//         (n->next)->next=(m->next)->next;
//         ListNode* s=n->next;
        
//         // while(m!=NULL){
//         //     cout<<m->val<<endl;
//         //     m=m->next;
//         // }
//        // cout<<s->val<<endl;
//         n->next=m->next;
//         cout<<"  /////"<<endl;
//         while(m!=NULL){
//             cout<<m->val<<endl;
//             m=m->next;
//         }
        
//         m->next=s;
        
        swap(n->val,m->val);
        
        return head;
        
    }
};
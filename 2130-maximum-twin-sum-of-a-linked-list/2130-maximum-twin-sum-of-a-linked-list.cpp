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
    
    int pairSum(ListNode* head) {
        
        
        
        ListNode* slow=head;
        
        ListNode* fast=head->next;
        
        
        while(fast!=nullptr and fast->next!=nullptr) 
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* mid =reverseList(slow);
        
        ListNode *temp=head;
        
        
        long long ans=INT_MIN;
        while(mid){
            long long s=INT_MIN;
         if(temp)    s=temp->val+mid->val;
            ans = max(ans,s);
            mid=mid->next;
          if(temp)  temp=temp->next;
            
        }
        return ans;
    }
};
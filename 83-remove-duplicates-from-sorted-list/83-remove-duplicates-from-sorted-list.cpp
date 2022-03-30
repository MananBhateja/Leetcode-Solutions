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
  void insert_at_tail(ListNode *&head,int data){
        ListNode *n=new ListNode(data);
        if(head==NULL)
            head=n;
        ListNode *temp=head;
        while(temp->next!=NULL){
           temp= temp->next;
            
        }
        temp->next=n;
        n->next=NULL;
        
        
    }
    
  ListNode* func(set<int>s){
        
        ListNode* st=NULL;
        
        for(auto node:s){
            
          insert_at_tail(st,node);
            
        }
        return st;
    }
    
    
    
    
    
    ListNode* deleteDuplicates(ListNode* head) {
       // map<int,ListNode* >h;
        set<int>s;
        ListNode* temp=head;
       
        while(temp!=NULL){
            s.insert(temp->val);
            temp=temp->next;
        }
        
        return func(s);
        
    }
};
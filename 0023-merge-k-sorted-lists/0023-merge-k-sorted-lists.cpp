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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        auto cmp=[](ListNode* a ,ListNode* b){ return a->val > b->val;};
         priority_queue<ListNode*, vector<ListNode*>,decltype(cmp)>pq(cmp); 
        
        for(auto x:lists)
           if(x) pq.push(x);
        
        if(pq.empty()) return nullptr;
        
        ListNode* head = pq.top();
        pq.pop();
        
        ListNode* curr =head;
        if(head -> next) pq.push(head->next);
        head->next=nullptr;
        
        while(!pq.empty()){
            
            ListNode* n =pq.top();
            pq.pop();
            
            curr->next=n;
            curr=n;
            
            if(n->next) pq.push(n->next);
            
        }
        
        return head;
    }
};
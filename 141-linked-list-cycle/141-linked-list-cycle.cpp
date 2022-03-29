/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        if(head->next==NULL)
            return false;
        
        unordered_map<ListNode* , int >h;
        
        ListNode *temp=head;
        
        while(temp!=NULL){
            if(h.count(temp))
                return true;
            else
                h[temp]=temp->val;
            temp=temp->next;
        }
        return false;
    }
};
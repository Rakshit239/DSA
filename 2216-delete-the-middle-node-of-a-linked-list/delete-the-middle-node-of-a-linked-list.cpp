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
    //swapnil
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=head;
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        if(slow->next!=NULL){
        ListNode* delNode =  slow->next;
        slow->val=slow->next->val;
        slow->next=slow->next->next;
        delete delNode;
        }else{
            prev->next=NULL;
        }

        return head;
    }
};
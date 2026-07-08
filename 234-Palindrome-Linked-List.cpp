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
    
    ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* forward=NULL;
        ListNode* prev=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        head=prev;
        return head;
    }
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondHalf = reverse(slow->next);
        ListNode* firstHalf = head;
        ListNode* temp = secondHalf;

        while (temp != NULL) {
            if (firstHalf->val != temp->val) {
                slow->next = reverse(secondHalf);
                return false;
            }
            firstHalf = firstHalf->next;
            temp = temp->next;
        }

        slow->next = reverse(secondHalf);

        return true;
    }
        
};
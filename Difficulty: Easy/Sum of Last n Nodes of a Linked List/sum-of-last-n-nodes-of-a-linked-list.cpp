/* Structure for link list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int sumofNodes(Node* head, int n) {
        // Code Here
        Node* slow=head;
        Node* fast=head;
        
        while(n--){
            fast=fast->next;
        }
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        
        int result=0;
        while(slow!=NULL){
            result+=slow->data; 
            slow=slow->next;
        }
        
        return result;
    }
};
/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    bool isCircular(Node *head) {
        // code here
        Node* temp = head;
        while( temp->next!=NULL && temp->next!=head){
            temp=temp->next;
        }
        return temp->next==head;
    }
};
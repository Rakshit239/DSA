/* Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int sumBT(Node* root) {
        if(root==NULL) return 0;
        int a = sumBT(root->left);
        int b = sumBT(root->right);
        return root->data+a+b;
    }
};
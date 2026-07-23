/* Node Structure
class Node {
public:
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    int getSize(Node* root) {
        // code here
        if(root==NULL) return 0;
        int a = getSize(root->left);
        int b = getSize(root->right);
        return 1+a+b;
    }
};
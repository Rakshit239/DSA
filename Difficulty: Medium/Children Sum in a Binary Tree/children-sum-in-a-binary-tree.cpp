/* Structure of a Tree Node
class Node {
public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    bool isSumProperty(Node *root) {
        // code here
        if(root==NULL) return true;
        if(root->left ==NULL && root->right==NULL) return true;
        int l=0,r=0;
        if(root->left) l=root->left->data;
        if(root->right) r=root->right->data;
        return (l+r==root->data) && isSumProperty(root->left) && isSumProperty(root->right);
    }
};
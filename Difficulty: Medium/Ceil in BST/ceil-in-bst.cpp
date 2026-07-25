/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int findCeil(Node* root, int k) {
        // code here
        int ceil=-1;
        while(root){
            if(root->data>=k){
                ceil=root->data;
                root=root->left;
            }else{
                root=root->right;
            }
        }
        return ceil;
    }
};

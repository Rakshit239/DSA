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
    void solve(Node* root,int&ans){
        if(root==NULL) return;
        if(root->left==NULL){
            ans=root->data;
            return;
        }
        solve(root->left,ans);
    }
    int minValue(Node* root) {
        // code here
        int ans=0;
        solve(root,ans);
        return ans;
        
    }
};
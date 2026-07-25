/*
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
    void solve(Node* root,int &count){
        if(root==NULL) return;
        solve(root->left,count);
        count++;
        solve(root->right,count);
    }
    void s(Node* root,int &c,int &n,int &ans){
        if(root==NULL) return;
        
        s(root->left,c,n,ans);
        c++;
        if(c==n){
            ans=root->data;
            return ;
        }
        s(root->right,c,n,ans);
    }
    int findMedian(Node* root) {
        int count=0;
        solve(root,count);
        int c=0;
        int ans=0;
        if(count%2==0){
            int mid = count/2;
            s(root,c,mid,ans);
        }else{
            int mid = (count+1)/2;
            s(root,c,mid,ans);
        }
        return ans;
        
        
    }
};
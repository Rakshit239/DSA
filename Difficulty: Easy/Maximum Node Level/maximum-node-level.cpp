/* Structure of a Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    void helper(Node* root,int &m){
        if(root==NULL) return;
        queue<Node*>q;
        q.push(root);
        int maxi=0;
        int l=-1;
        while(!q.empty()){
            
            int size=q.size();
            int count=0;
            for(int i=0;i<size;i++){
                Node* node=q.front();
                q.pop();
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
                count++;
            }
            l++;
            if(count>maxi){
                maxi=count;
                m=l;
            }
            
        }
    }
    int maxNodeLevel(Node *root) {
        // code here
        int maxi=0;
        helper(root,maxi);
        return maxi;
    }
};
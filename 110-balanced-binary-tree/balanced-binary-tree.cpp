/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        int a = height(root->left);
        int b = height(root->right);
        return 1+(max(a,b));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        if(root->left==NULL && root->right==NULL) return true;
        
        int l = height(root->left);
        int r = height(root->right);
        return (abs(l-r)<=1) && isBalanced(root->left) && isBalanced(root->right);
    }
};
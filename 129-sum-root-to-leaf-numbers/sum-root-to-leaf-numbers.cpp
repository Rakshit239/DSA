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
    void solve(TreeNode* root,vector<int> &temp,vector<vector<int>> &ans){
        if(root==NULL) return ;
        temp.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            ans.push_back(temp);
        }
        solve(root->left,temp,ans);
        solve(root->right,temp,ans);
        temp.pop_back();

    }
    int sum(vector<int> t){
        int rem=0;
        for(int i=0;i<t.size();i++){
            rem=(rem*10)+t[i];
        }
        return rem;
    }
    int sumNumbers(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(root,temp,ans);
        int summ=0;
        for(int i=0;i<ans.size();i++){
            summ+=sum(ans[i]);
        }
        return summ;
    }
};
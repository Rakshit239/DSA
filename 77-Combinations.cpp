class Solution {
public:
    void helper(int i,int k,int n,vector<int> &temp,vector<vector<int>> &ans){
        if(i==n+1){
            if(temp.size()==k){
                ans.push_back(temp);
            }
            return;
        }
        temp.push_back(i);
        helper(i+1,k,n,temp,ans);
        temp.pop_back();
        helper(i+1,k,n,temp,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int>temp;
        helper(1,k,n,temp,ans);
        return ans;
    }
};
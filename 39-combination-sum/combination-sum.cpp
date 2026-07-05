class Solution {
public:
    //swapnil
    void helper(int i,int target,int &s,vector<int> &temp,vector<vector<int>> &ans, vector<int> &arr){
        if(s>target){
            return;
        }
        if(i==arr.size()){
            if(s==target){
                ans.push_back(temp);
            }
            return;
        }
        temp.push_back(arr[i]);
        s+=arr[i];
        helper(i,target,s,temp,ans,arr);
        temp.pop_back();
        s-=arr[i];
        helper(i+1,target,s,temp,ans,arr);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum=0;
        helper(0,target,sum,temp,ans,candidates);
        return ans;
    }
};
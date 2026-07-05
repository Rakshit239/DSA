class Solution {
public:
//swapnil
    void helper(int i,int target,vector<int> &temp,vector<vector<int>> &ans, vector<int> &arr){
        
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int ind=i;ind<arr.size();ind++){
            if(ind>i && arr[ind]==arr[ind-1]){
                continue;
            }
            if(arr[ind]>target){
                break;
            }
            temp.push_back(arr[ind]);
            helper(ind+1,target-arr[ind],temp,ans,arr);
            temp.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        helper(0,target,temp,ans,candidates);
        return ans;
    }
};
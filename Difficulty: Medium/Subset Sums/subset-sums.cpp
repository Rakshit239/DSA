class Solution {
  public:
    void helper(vector<int> &ans,int &sum ,int i,vector<int> &arr){
        if(i==arr.size()){
            ans.push_back(sum);
            return;
        }
        sum+=arr[i];
        helper(ans,sum,i+1,arr);
        sum-=arr[i];
        helper(ans,sum,i+1,arr);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;
        int sum=0;
        helper(ans,sum,0,arr);
        return ans;
    }
};
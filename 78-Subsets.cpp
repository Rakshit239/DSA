class Solution {
public:
    //by recursion
    // void getallSets(vector<int> &arr,vector<int> &ans,int idx,vector<vector<int>> &allsubsets){
    //     if(idx==arr.size()){
    //         allsubsets.push_back({ans});
    //         return;
    //     }
    // ans.push_back(arr[idx]);
    // getallSets(arr,ans,idx+1,allsubsets);
    // ans.pop_back();
    // getallSets(arr,ans,idx+1,allsubsets);
    // }

   
    vector<vector<int>> subsets(vector<int>& arr) {
        // vector<vector<int>> allsubsets;
        // vector<int> ans;

        // getallSets(arr,ans,0,allsubsets);

        // return allsubsets;
        int n = arr.size();
        int sub = (1<<n);
        vector<vector<int>> ans;
        for(int i=0;i<sub;i++){
            vector<int> vec;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    vec.push_back(arr[j]);
                }
            }
            ans.push_back(vec);
        }
        return ans;
    }
};
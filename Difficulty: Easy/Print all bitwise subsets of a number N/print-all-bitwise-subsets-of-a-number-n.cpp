
// fucntion to find bitwise subsets
// Efficient approach
class Solution {
  public:
    vector<int> printSubsets(int n) {
        // Code here
        vector<int> ans;
        for(int i=0;i<=n;i++){
            if((n&i)==i){
                ans.push_back(i);
            }
        }
        sort(ans.rbegin(),ans.rend());
        return ans;
    }
};

class Solution {
  public:
    
    vector<int> getXor(vector<int>& arr) {
        // code here
        int xxor=0;
        for(int i=0;i<arr.size();i++){
            xxor=xxor^arr[i];
        }
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            int a = xxor^arr[i];
            ans.push_back(a);
        }
        return ans;
        
    }
};
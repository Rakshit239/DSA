class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> cpy;
        cpy=nums;
        for(int i=0;i<cpy.size();i++){
            nums.push_back(cpy[i]);
        }
        vector<int> ans(n,-1);
        stack<int> st;
        for(int i = nums.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i] ){
                st.pop();
            }
            if(!st.empty()){
                ans[i%n]=st.top();
            }
            st.push(nums[i]);
        }
        return ans;
    }
};
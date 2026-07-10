class Solution {
public:
    vector<int> nse(vector<int> &arr){
        stack<int> st;
        vector<int> ans(arr.size(),arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
    }
    vector<int> pse(vector<int> &arr){
        vector<int> ans(arr.size(),-1);
        stack<int> st;
        for(int  i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& arr) {
        vector<int> left=nse(arr);
        vector<int> right=pse(arr);

        int ans=0;
        for(int i=0;i<arr.size();i++){
            int width = left[i]-right[i]-1;
            int currarea = arr[i]*width;
            ans=max(ans,currarea);
        }
        return ans;
    }
};
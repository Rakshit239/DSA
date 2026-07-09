class Solution {
public:
    int MOD = 1e9+7;
    vector<int> nse(vector<int>&arr){
        vector<int> ans(arr.size(),arr.size());
        stack<int> st;
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
    vector<int> pse(vector<int>&arr){
        vector<int> ans(arr.size(),-1);
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> Nse=nse(arr);
        vector<int> Pse=pse(arr);
        int left,right;
        long long total=0;
        for(int i=0;i<arr.size();i++){
            left = i-Pse[i];
            right=Nse[i]-i;
            total=(total+(1LL*left*right*arr[i])%MOD)%MOD;
        }
        return total;

    }
};
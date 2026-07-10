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
    int maximalRectangle(vector<vector<char>>& matrix) {
        int maxArea=0;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> height(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1'){
                    height[j]++;
                }else{
                    height[j]=0;
                }
            }
            int area= largestRectangleArea(height);
            maxArea = max(area,maxArea);
        }
        return maxArea;

    }
};
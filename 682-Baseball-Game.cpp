class Solution {
public:
    int calPoints(vector<string>& arr) {
        int k = arr.size();
        stack<int> st;
        for(int i=0;i<k;i++){
            if(!st.empty() && arr[i]=="D"){
                int n = st.top();
                st.push(2*n);
            }else if(!st.empty() && arr[i]=="+"){
                int n = st.top();
                st.pop();
                int a = st.top();
                st.push(n);
                st.push(a+n);
            }else if(!st.empty() && arr[i]=="C"){
                st.pop();
            }else{
                st.push(stoi(arr[i]));
            }
        }
        if(st.empty()) return 0;
        int ans =0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
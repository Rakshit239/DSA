class Solution {
public:
    string removeKdigits(string s, int k) {
        if(s.size()==k){
            return "0";
        }
        stack<int> st;
        for(int i=0;i<s.length();i++){
            while(!st.empty() && k>0 && st.top()>s[i]){
                st.pop();
                k--;
            }
            st.push(s[i]);
        }
        while(k > 0){
        st.pop();
        k--;
        }
        
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i = 0;
        while(i < ans.size() && ans[i] == '0'){
            i++;
        }
        ans = ans.substr(i);
        if(ans.empty()){
            return "0";
        }
        return ans;
    }
};
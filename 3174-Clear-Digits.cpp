class Solution {
public:
    string clearDigits(string s) {
        stack<int> st;
        string ans="";
        for(int i=s.length()-1;i>=0;i--){
            if(isdigit(s[i])){
                st.push(s[i]);
            }else{
                if(!st.empty()){
                    st.pop();
                }else{
                    ans.push_back(s[i]);
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
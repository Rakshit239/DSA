class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int> st;
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            bool alive = true;
           while(!st.empty() && arr[i]<0 && st.top()>0 && alive){
                if(abs(st.top())<abs(arr[i])){
                    st.pop();
                }else if(abs(st.top())==abs(arr[i])){
                    st.pop();
                    alive=false;
                }else{
                    alive=false;
                }
           }
           if(alive){
            st.push(arr[i]);
           }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if(q.size()<k){
            return q;
        }
        stack<int> st;
        // queue<int> qe;
        while(k--){
            st.push(q.front());
            q.pop();
        }
        int n = q.size();
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        while(n--){
            int a = q.front();
            q.pop();
            q.push(a);
        }
        return q;
    }
};
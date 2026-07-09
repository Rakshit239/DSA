class Solution {
  public:
    vector<string> generateBinary(int n) {
        // code here
        queue<string> q;
        vector<string> ans;
        q.push("1");
        while(n--){
            string a = q.front();
            q.pop();
            ans.push_back(a);
            q.push(a+"0");
            q.push(a+"1");
        }
        return ans;
    }
};
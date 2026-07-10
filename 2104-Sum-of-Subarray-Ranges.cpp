class Solution {
public:
    vector<int> nse(vector<int>& arr){
        vector<int> ans(arr.size(), arr.size());
        stack<int> st;

        for(int i = arr.size()-1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            if(!st.empty())
                ans[i] = st.top();

            st.push(i);
        }
        return ans;
    }

    vector<int> pse(vector<int>& arr){
        vector<int> ans(arr.size(), -1);
        stack<int> st;

        for(int i = 0; i < arr.size(); i++){
            while(!st.empty() && arr[st.top()] > arr[i])
                st.pop();

            if(!st.empty())
                ans[i] = st.top();

            st.push(i);
        }
        return ans;
    }

    vector<int> nge(vector<int>& arr){
        vector<int> ans(arr.size(), arr.size());
        stack<int> st;

        for(int i = arr.size()-1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] <= arr[i])
                st.pop();

            if(!st.empty())
                ans[i] = st.top();

            st.push(i);
        }
        return ans;
    }

    vector<int> pge(vector<int>& arr){
        vector<int> ans(arr.size(), -1);
        stack<int> st;

        for(int i = 0; i < arr.size(); i++){
            while(!st.empty() && arr[st.top()] < arr[i])
                st.pop();

            if(!st.empty())
                ans[i] = st.top();

            st.push(i);
        }
        return ans;
    }

    long long subArrayRanges(vector<int>& nums) {

        vector<int> Nse = nse(nums);
        vector<int> Pse = pse(nums);

        vector<int> Nge = nge(nums);
        vector<int> Pge = pge(nums);

        long long minSum = 0;
        long long maxSum = 0;

        for(int i = 0; i < nums.size(); i++){

            long long left = i - Pse[i];
            long long right = Nse[i] - i;

            minSum += 1LL * nums[i] * left * right;

            left = i - Pge[i];
            right = Nge[i] - i;

            maxSum += 1LL * nums[i] * left * right;
        }

        return maxSum - minSum;
    }
};
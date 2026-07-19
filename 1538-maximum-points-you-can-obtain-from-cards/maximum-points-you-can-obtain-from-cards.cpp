class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n = arr.size();

        int sum = 0;
        for (int i = 0; i < k; i++)
            sum += arr[i];

        int ans = sum;

        int left = k - 1;
        int right = n - 1;

        while (left >= 0) {
            sum -= arr[left];   // remove one from left
            sum += arr[right];  // add one from right

            ans = max(ans, sum);

            left--;
            right--;
        }

        return ans;
        
    }
};
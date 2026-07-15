class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0, sum2 = 0;
        long long zero1 = 0, zero2 = 0;

        for (int x : nums1) {
            if (x == 0)
                zero1++;
            else
                sum1 += x;
        }

        for (int x : nums2) {
            if (x == 0)
                zero2++;
            else
                sum2 += x;
        }

        long long minSum1 = sum1 + zero1;
        long long minSum2 = sum2 + zero2;

        if (minSum1 == minSum2)
            return minSum1;

        if (minSum1 < minSum2) {
            if (zero1 == 0)
                return -1;
            return minSum2;
        }

        if (zero2 == 0)
            return -1;

        return minSum1;
    }
};
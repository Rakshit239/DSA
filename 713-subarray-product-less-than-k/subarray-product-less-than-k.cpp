class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0,j=0;
        long long prod=1;
        long long count=0;
        while(j<n){
            prod*=nums[j];
            while(prod>=k){
                prod=prod/nums[i];
                i++;
            }
            count+=(j-i+1);
            j++;
        }
        return count;
    }
};
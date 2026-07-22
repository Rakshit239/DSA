class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // // int ans=0;
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]+1!=nums[i+1]){
        //         return nums[i]+1;
        //     }
        // }
        // if(nums[0]!=0){
        //     return 0;
        // }
        // return nums[nums.size()-1]+1;
        int xorr=0;
        int n = nums.size();
        for(int i=0;i<=n;i++){
            xorr=xorr^i;
        }
        for(int i=0;i<n;i++){
            xorr=xorr^nums[i];
        }
        return xorr;
    }

};
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0;
        int n = nums.size();
        int zero=0;
        int ans=0;
        while(j<n){
           if(nums[j]==0) zero++; 
           //o(2N)
        //    while(zero>k){
        //     if(nums[i]==0) zero--;
        //      i++;
        //    }

             //now o(n)
            if(zero>k){
                if(nums[i]==0){
                    zero--;
                }
                i++;
            }
           if(zero<=k){
            int len = j-i+1;
            ans=max(ans,len);
           }
           j++;
        }
        return ans;
    }
};
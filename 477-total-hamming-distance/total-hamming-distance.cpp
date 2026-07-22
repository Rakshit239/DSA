class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int sum=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         sum+=__builtin_popcount(nums[i]^nums[j]);
        //     }
        // 
        
        int total=0;
        for(int i=0;i<32;i++){
            int setbits=0;
            int zero=0;
            for(auto it:nums){
                if(((it>>i)&1)==1) {
                    setbits++;
                }else{
                    zero++;
                }
            }
            total+=(setbits*zero);
        }
        return total;
    }
};
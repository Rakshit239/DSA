class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //using sliding window but not optimal solution
        // int n= nums.size();
        // int i=0,j=0;
        // vector<int> ans;
        // int maxi=0;
        // while(j<n){
            
        //     if(j-i+1<k){
        //         j++;
        //     }else{
        //         else {
        //         int maxi = nums[i];

        //         for(int x = i; x <= j; x++) {
        //             maxi = max(maxi, nums[x]);
        //         }

        //         ans.push_back(maxi);
        //         i++;
        //         j++;
        //     }
        //     }
        // }
        // return ans;
    

    // using monotonic stack
    vector<int> ans;
    deque<int> dq;
    for(int i=0;i<k;i++){
        while(dq.size() && nums[dq.back()]<=nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k;i<nums.size();i++){
        ans.push_back(nums[dq.front()]);
        while(dq.size() && dq.front()<=i-k){
            dq.pop_front();
        }
        while(dq.size() && nums[dq.back()]<=nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(nums[dq.front()]);
    return ans;









    }
};
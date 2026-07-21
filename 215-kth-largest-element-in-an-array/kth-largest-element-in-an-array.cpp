class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // priority_queue<int> pq;
        // int n = nums.size();
        // for(int i :nums){
        //     pq.push(i);
        // }
        // int count=1;
        // while(!pq.empty()){
        //     int a = pq.top();
        //     if(count==k){
        //         return a;
        //     }
        //     count++;
        //     pq.pop();
        // }
        // return 0;
        priority_queue<int,vector<int>,greater<int>> pq;
        int n = nums.size();
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};
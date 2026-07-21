class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        int n = nums.size();
        for(int i :nums){
            pq.push(i);
        }
        int count=1;
        while(!pq.empty()){
            int a = pq.top();
            if(count==k){
                return a;
            }
            count++;
            pq.pop();
        }
        return 0;
    }
};
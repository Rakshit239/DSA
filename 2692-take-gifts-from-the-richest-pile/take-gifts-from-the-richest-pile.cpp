class Solution {
public:
    long long pickGifts(vector<int>& arr, int k) {
        priority_queue<int> pq;
        for(int i: arr){
            pq.push(i);
        }
        while(k--){
            int a = pq.top();
            pq.pop();
            pq.push(floor(sqrt(a)));
        }
        long long sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;

    }
};
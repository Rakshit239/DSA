class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
    
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto it:freq){
            pq.push(it.second);
            if(pq.size()>k){
                pq.pop();
            }
        }
        set<int> s;
        while(!pq.empty()){
            int a = pq.top();
            pq.pop();
            s.insert(a);
        }
        vector<int> ans;
        for (auto it : freq) {
            if (s.find(it.second) != s.end()) {  
            ans.push_back(it.first); 
        }
}
        return ans;
    }
};
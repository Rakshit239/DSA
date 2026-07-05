class Solution {
public:
    //swapnil
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            int val = target-arr[i];
            if(mp.find(val)!=mp.end()){
                return {mp[val],i};
            }
            mp[arr[i]]=i;
        }
        return {};
    }
};
class Solution {
public:
    static bool comp(pair<int,int>&a,pair<int,int>&b){
            if(a.first==b.first){
                return a.second>b.second;
            }
            return a.first<b.first;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<pair<int,int>> vec;
        for(auto it:freq){
            vec.push_back({it.second,it.first});
        }
        
        sort(vec.begin(),vec.end(),comp);
        vector<int> ans;
        for(int i=0;i<vec.size();i++){
            int num = vec[i].second;
            int fr = vec[i].first;
            while(fr--){
                ans.push_back(num);
            }
        }
        return ans;
        
    }
};
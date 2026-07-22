class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                a.push_back(nums[i]);
            }else{
                b.push_back(nums[i]);
            }
        }
        for(int i=0;i<a.size();i++){
            ans.push_back(b[i]);
            ans.push_back(a[i]);
        }
        return ans;
        
    }
};
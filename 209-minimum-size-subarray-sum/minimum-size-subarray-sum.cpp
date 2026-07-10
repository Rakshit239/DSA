class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n = arr.size();
        int i=0,j=0;
        int mini = INT_MAX;
        int sum=0;
        while(j<n){
            sum+=arr[j];
            while(sum>=target){
                mini=min(mini,j-i+1);
                sum-=arr[i];
                i++;
            }
            j++;
        }
        if(mini==INT_MAX){
            return 0;
        }
        return mini;
    }
};
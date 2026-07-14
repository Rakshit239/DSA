class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int i=0,j=n-1;
        int boat=0;
        while(i<=j){
            if(arr[i]+arr[j]<=limit){
                // boat++;
                i++;
                j--;
            }else{
                // boat++;
                j--;
            }
            boat++;
        }
        return boat;
    }
};
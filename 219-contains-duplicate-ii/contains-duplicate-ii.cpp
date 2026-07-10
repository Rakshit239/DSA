class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        int i=0,j=0;
        unordered_set<int> st;
        int n = arr.size();
        while(j<n){
            if(abs(i-j)>k){
                st.erase(arr[i]);
                i++;
            }
            if(st.find(arr[j])!=st.end()){
                return true;
            }
            st.insert(arr[j]);
            j++;
        }
        return false;
    }
};
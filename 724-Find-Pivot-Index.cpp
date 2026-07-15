class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n = arr.size();
        vector<int> ps(n+1,0);
        vector<int> sf(n+1,0);
        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]+arr[i-1];
        }
        for(int i=n-1;i>=0;i--){
            sf[i]=sf[i+1]+arr[i];
        }
        for(int i=0;i<n;i++){
            if(ps[i]==sf[i+1]){
                return i;
            }
        }
        return -1;
    }
};
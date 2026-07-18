class Solution {
  public:
    
    int findMissing(vector<int>& arr1, vector<int>& arr2) {
        // code here
        int n=0;
        for(int i=0;i<arr1.size();i++){
            n= n^arr1[i];
        }
        for(int i=0;i<arr2.size();i++){
            n=n^arr2[i];
        }
        return n;
    }
};
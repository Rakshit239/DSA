class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int i=0,j=0;
        int ans=0;
        int k=2;
        unordered_map<int,int> mpp;
        while(j<n){
            mpp[fruits[j]]++;
            //O(N+M)
            // if(mpp.size()>k){
            //     while(mpp.size()>k){
            //         mpp[fruits[i]]--;
            //         if(mpp[fruits[i]]==0) mpp.erase(fruits[i]);
            //         i++;
            //     }
            // }  
            // if(mpp.size()<=k){
            //     ans=max(ans,j-i+1);
            // }
            if(mpp.size()>k){
                if(mpp.size()>k){
                    mpp[fruits[i]]--;
                    if(mpp[fruits[i]]==0) mpp.erase(fruits[i]);
                    i++;
                }
            }  
            if(mpp.size()<=k){
                ans=max(ans,j-i+1);
            }

            j++;
        }
        return ans;
    }
};
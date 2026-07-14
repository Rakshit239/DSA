class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& arr) {
        int maxsort = *max_element(arr.begin(),arr.end());
        vector<int> freq(maxsort+1,0);
        for(int num:arr){
            freq[num]++;
        }
        long long total=mass;
        for(int i=1;i<=maxsort;i++){
            if(freq[i]==0){
                continue;
            }
            if(total<i){
                return false;
            }
            total+=1LL*freq[i]*i;
        }
        return true;
    }

};
class Solution {
public:
    int minOperations(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int num : arr){
            freq[num]++;
        }
        int op=0;
        for(auto it:freq){
            if(it.second==1){
                return -1;
            }
            while(it.second%3!=0){
                it.second-=2;
                op++;
            }
            if(it.second%3==0){
                op+=(it.second/3);
            }
        }
        return op;
        
    }
};
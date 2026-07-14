class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        //nlogn complexity
        // int n = arr.size();
        // int i=0;
        // int sum=0;
        // int count=0;
        // sort(arr.begin(),arr.end());
        // while(i!=n){
        //     if((sum+=arr[i]) <=coins){
        //         count++;
        //     }
        //     i++;
            
        // }
        // return count;
        //0(n) comp
        //custom sort
        int  maxcost = *max_element(begin(costs),end(costs));
        vector<int> freq(maxcost+1,0);
        for(int num:costs){
            freq[num]++;
        }
        int total=0;
        for(int i=1;i<=maxcost;i++){
            if(freq[i]==0){
                continue;
            }
            if(coins<i){
                break;
            }
            int canbuy = min(freq[i],coins/i);
            total+=canbuy;
            coins-=canbuy*i;
        }
        return total;
    }
};
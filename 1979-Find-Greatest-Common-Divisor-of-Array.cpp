class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int temp =b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int max = *max_element(nums.begin(),nums.end());
        int min = *min_element(nums.begin(),nums.end());

        return gcd(max,min);
        
    }
};
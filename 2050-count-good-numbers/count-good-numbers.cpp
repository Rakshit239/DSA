class Solution {
public:
    int const MOD=1e9+7;
    long long power(int x,long long n){
            if(n==0){
                return 1;
            }

            long long half = power(x,n/2);
            long long ans= (half*half)%MOD;
            if(n%2!=0){
                ans=(x*ans)%MOD;
            }
            return ans;
    }
    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
        long long odd = n/2;

        return (power(5,even)*power(4,odd))%MOD;
    }
};
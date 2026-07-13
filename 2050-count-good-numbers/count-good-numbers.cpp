class Solution {
public:
//swapnil
    int const MOD=1e9+7;
    long long power(int x,long long n){
            if(n==0){
                return 1;
            }

            // long long half = power(x,n/2);
            // long long ans= (half*half)%MOD;
            // if(n%2!=0){
            //     ans=(x*ans)%MOD;
            // }
            // return ans;
            if(n==0){
            return 1;
        }
        if(n%2==0){
            return power((1LL*x*x)%MOD,n/2);
        }
        
        return (x*power((1LL*x*x)%MOD,(n-1)/2))%MOD;
    }
    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
        long long odd = n/2;

        return (power(5,even)*power(4,odd))%MOD;
    }
};
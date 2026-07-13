class Solution {
public:
    double solve(double x,long n){
        if(n==0){
            return 1;
        }
        if(n<0){
            return solve(1.0/x,-n);
        }
        if(n%2==0){
            return solve(x*x,n/2);
        }
        
        return x*solve(x*x,(n-1)/2);

    }

    double myPow(double x, int n) {
        // big oh n using loop
        // double ans=1.0;
        // long long n = nn;
        // if(n<0){
        //     n= -1*n;
        // }
        // while(n>0){
        //     if(n%2!=0){
        //         ans=ans*x;
        //         n=n-1;
        //     }else{
        //         x=x*x;
        //         n=n/2;
        //     }
        // }
        // if(nn<0){
        //     ans=(double)1/double(ans);
        // }
        // return ans;


        //using recursion   --- binary exponention gives log(n) tc
        return solve(x,(long)n);

    }
};
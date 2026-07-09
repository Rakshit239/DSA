class Solution {
public:
    int trap(vector<int>& h) {
        //prefix array approch -- O(n) space complexity 
        int n=h.size();
        // vector<int> lmax(n,0);
        // vector<int> rmax(n,0);
        // lmax[0]=h[0];
        // rmax[n-1]=h[n-1];
        // for(int i=1;i<n;i++){
        //     lmax[i]=max(lmax[i-1],h[i]);
        // }
        // for(int i=n-2;i>=0;i--){

        //     rmax[i]=max(rmax[i+1],h[i]);
        // }
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     ans+=min(lmax[i],rmax[i])-h[i];
        // }
        // return ans;

        //two pointer approch  -- O(1) space complexity
        int ans=0;
        int l=0,r=n-1;
        int lmax,rmax;
        while(l<r){
            lmax=max(lmax,h[l]);
            rmax=max(rmax,h[r]);
            if(lmax<rmax){
                ans+=lmax-h[l];
                l++;
            }else{
                ans+=rmax-h[r];
                r--;
            }
        }
        return ans;
    }
};
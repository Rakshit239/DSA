class Solution {
public:
    int gcd(int x,int y){
        int a=max(x,y);
        int b =min(x,y);
        while(b!=0){
            int temp = b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> freq;
        for(int num:deck){
            freq[num]++;
        }
        int GCD=0;
        for(auto it:freq){
            GCD=gcd(GCD,it.second);
            if(GCD==1) return false;
        }
        return true;
        
    }
};
class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0;
        int n = s.length();
        unordered_map<int,int> mpp(26);
        int maxf=0;
        int maxlen=0;
        while(j<n){
            mpp[s[j]-'A']++;
            maxf=max(maxf,mpp[s[j]-'A']);
            if((j-i+1)-maxf>k){
                mpp[s[i]-'A']--;
                maxf=0;
                for(int k=0;k<26;k++){
                    maxf=max(maxf,mpp[k]-'A');
                }
                i++;
            }
            if((j-i+1)-maxf<=k){
                maxlen=max(maxlen,j-i+1);
            }
            j++;
        }
        return maxlen;
    }
};
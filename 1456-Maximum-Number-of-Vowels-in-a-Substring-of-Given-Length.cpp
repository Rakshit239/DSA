class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int i=0,j=0;
        int count=0;
        int maxi=0;
        while(j<n){
            if(s[j]=='a' || s[j] == 'e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                count++;
            }
            while(j-i+1>k){
                if(s[i]=='a' || s[i] == 'e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                    if(count>0){
                    count--;
                    }
                }
                i++;
            }
            if(j-i+1==k){
                maxi=max(maxi,count);
            }
            j++;
        }
        return maxi;
    }
};
class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.length();
        // int k;
        // for(k=n-1;k>=0;k--){
        //     if(s[k]=='0'){
        //         break;
        //     }
        // }
        int i=0,j=n-1;
        long long  count=0;
        while(i<j){
            if(i<j && s[i]=='0'){
                i++;
            }else if(i<j && s[j]=='1'){
                j--;
            }else{
                count+=j-i;
                i++;
                j--;
            }
        }
        return count;
    }
};
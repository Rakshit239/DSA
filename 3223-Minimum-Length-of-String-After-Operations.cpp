class Solution {
public:
    int minimumLength(string s) {
        vector<int> freq(26,0);
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        int count=0;
        for(auto it:freq){
            if(it>0){
                if(it%2==0){
                    count=count+2;
                }else{
                    count++;
                }
            }
        }
        return count;
    }
};
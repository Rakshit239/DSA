class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> freq;
        int ans =0;
        int i=0,j=0;
        int n = s.length();
        while(j<n){
            freq[s[j]]++;
            while(freq[s[j]]>1){
                freq[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
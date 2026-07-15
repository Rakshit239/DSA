class Solution {
public:
    int partitionString(string s) {
        vector<int> lastSeen(26,-1);
        int count=0,subStart=0;
        for(int i=0;i<s.length();i++){
            if(lastSeen[s[i]-'a']>=subStart){
                count++;
                subStart=i;
            }
            lastSeen[s[i]-'a']=i;
        }
        return count+1;
    }
};
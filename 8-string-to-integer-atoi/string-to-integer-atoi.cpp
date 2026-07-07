class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        int i=0;
        int found=0;
        bool started=false;
        while(i!=s.size()){
            if(!started && s[i]==' '){
                i+=1;
            }else if(!started && (s[i]=='-'||s[i]=='+')){
                if(started){
                    break;
                }
                started=true;
                if(s[i]=='-'){
                    found=1;
                }
                i++;
            }else if(isdigit(s[i])){
                started=true;
                int digit=s[i]-'0';
                if(found==0){
                    if(ans > (INT_MAX - digit)/10)
                        return INT_MAX;
                    }
                else{
                    if(ans > ((long long)INT_MAX + 1 - digit)/10)
                    return INT_MIN;
                }
                ans = (ans*10)+(s[i]-'0');

                i++;
            }else{
                break;
            }
        }
        if(found==1){
            return -ans;
        }

        return ans;

    }
};
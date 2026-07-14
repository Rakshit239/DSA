class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.length()==1){
            return "";
        }
        string a = palindrome;
      for(int i=0;i<palindrome.length()/2;i++){
        if(palindrome[i]!='a'){
            palindrome[i]='a';
            break;
        }
      }  
      if(a==palindrome){
        palindrome[palindrome.length()-1]='b';
      }
    return palindrome;
    }
};
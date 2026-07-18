class Solution {
  public:
    int getFirstSetBit(int n) {
        // code here
        int pos=1;
        
        while(n>0){
          if(n&1==1){
              return pos;
          }
          n=n>>1;
          pos++;
        }
    }
};
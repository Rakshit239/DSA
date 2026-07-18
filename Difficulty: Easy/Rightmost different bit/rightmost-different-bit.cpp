class Solution {
  public:
    int posOfRightMostDiffBit(int m, int n) {
        //  code here
        int a = m^n;
        int pos=1;
        while(a>0){
            if((1&a)==1){
                return pos;
            }
            a=a>>1;
            pos++;
        }
        return -1;
    }
};
class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //ode here
        return (n&(1<<k));
    }
};
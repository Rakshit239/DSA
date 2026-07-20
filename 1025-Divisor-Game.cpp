class Solution {
public:
    bool divisorGame(int n) {
        // return n%2==0;
        return (n&1)!=1;
    }
};
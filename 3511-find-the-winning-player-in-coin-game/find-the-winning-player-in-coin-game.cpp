class Solution {
public:
    string winningPlayer(int x, int y) {
        // if(x%2==0 && y%4==3){
        //     return "Alice";
        // }
        // return "Bob";

        int count=0;
        while(x>=1 && y>=4){
            x-=1;
            y-=4;
            count++;
        }
        if(count&1){
            return "Alice";
        }
        return "Bob";
    }
};
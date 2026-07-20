class Solution {
public:
    string winningPlayer(int x, int y) {
        int count =(min(x,y/4));
        if(count&1){
            return "Alice";
        }
        return "Bob";
        //O(n)
        // int count=0;
        // while(x>=1 && y>=4){
        //     x-=1;
        //     y-=4;
        //     count++;
        // }
        // if(count&1){
        //     return "Alice";
        // }
        // return "Bob";
    }
};
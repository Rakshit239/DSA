class Solution {
public:
    bool lemonadeChange(vector<int>& arr) {
        int n =arr.size();
        int remain=0;
        int five=0;
        int ten=0;
        for(int i=0;i<n;i++){
            if (arr[i] == 5) {
                five++;
            }

            else if (arr[i] == 10) {
                if (five == 0)
                    return false;

                five--;
                ten++;     
            }

            else {
                if (ten > 0 && five > 0) {
                    ten--;
                    five--;
                }
                else if (five >= 3) {
                    five -= 3;
                }
                else {
                    return false;
                }
            }
        }
        return true;
    }
};
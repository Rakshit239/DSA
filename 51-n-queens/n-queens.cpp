class Solution {
public:
    bool isSafe(vector<string> &board,int row,int cols,int n){
        for(int i=0;i<n;i++){
            if(board[row][i]=='Q'){
                return false;
            }
        }
        for(int i=0;i<n;i++){
            if(board[i][cols]=='Q'){
                return false;
            }
        }
        for(int i=row,j=cols;i>=0&&j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row,j=cols;i>=0&&j>=0;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
    void nQuens(vector<string> &board,int row,int n,vector<vector<string>> &ans){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int j =0;j<n;j++){
            if(isSafe(board,row,j,n )){
                board[row][j]='Q';
                nQuens(board,row+1,n,ans);
                board[row][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        nQuens(board,0,n,ans);
        return ans;
    }
};
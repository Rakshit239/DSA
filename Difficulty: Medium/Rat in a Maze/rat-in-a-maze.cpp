class Solution {
  public:
    void helper(vector<vector<int>>& maze,int r,int c,string path,vector<string> &ans){
        if(r<0 || c<0 || r>=maze.size() || c>=maze.size() ||maze[r][c]==0 || maze[r][c]==-1){
            return;
        }
        if(r==maze.size()-1 && c==maze.size()-1){
            ans.push_back(path);
            return;
        }
        maze[r][c]=-1;
        helper(maze,r+1,c,path+"D",ans);
        helper(maze,r,c-1,path+"L",ans);
        helper(maze,r,c+1,path+"R",ans);
        helper(maze,r-1 ,c,path+"U",ans);
        
        
        maze[r][c]=1;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string> ans ;
        string path="";
        helper(maze,0,0,path,ans);
        return ans;
    }
};
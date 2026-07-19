class Solution {
public:
int gridpath(vector<vector<int>>& grid,int a,int b,int i,int j,vector<vector<int>>&dp){
    if(i<0 || j<0 || i>=a || j>=b){
        return INT_MAX;
    }
    if(i==a-1 && j==b-1){
        return grid[i][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int r1=gridpath(grid,a,b,i+1,j,dp);
    int r2=gridpath(grid,a,b,i,j+1,dp);
    return dp[i][j]=grid[i][j]+min(r1,r2);
}
    int minPathSum(vector<vector<int>>& grid) {
        int a=grid.size();
        int b=grid[0].size();
        vector<vector<int>>dp(a);
        for(int i=0;i<a;i++){
            vector<int>t(b,-1);
            dp[i]=t;
        }
        return gridpath(grid,a,b,0,0,dp);
    }
};
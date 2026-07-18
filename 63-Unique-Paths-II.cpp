class Solution {
public:
int grid(vector<vector<int>>& obstacleGrid,int a,int b,int i,int j,vector<vector<int>>&dp){
    if(i<0 || j<0 || i>=a || j>=b){
        return 0;
    }
    if(obstacleGrid[i][j]==1){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(i==a-1 && j==b-1){
        return 1;
    }

    return dp[i][j]=grid(obstacleGrid,a,b,i+1,j,dp)+grid(obstacleGrid,a,b,i,j+1,dp);
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int a=obstacleGrid.size();
        int b=obstacleGrid[0].size();
        vector<vector<int>>dp(a);
        for(int i=0;i<a;i++){
            vector<int>t(b,-1);
            dp[i]=t;
        }
        return grid(obstacleGrid,a,b,0,0,dp);
    }
};
class Solution {
public:
int path(int m, int n, int i, int j, vector<vector<int>>&dp){
    if(i==m-1 || j==n-1){
        return 1;
    }
    if(i<0 || j<0 || i>=m || j>=n){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    return dp[i][j]=path(m,n,i,j+1,dp)+path(m,n,i+1,j,dp);
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m);
        for(int i=0;i<m;i++){
            vector<int>t(n,-1);
            dp[i]=t;
        }
        return path(m,n,0,0,dp);
    }
};
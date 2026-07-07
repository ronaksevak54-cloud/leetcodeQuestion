class Solution {
public:
int commonsubsequence (string &text1, string &text2,int i,int j,vector<vector<int>>&dp){
    if(i==text1.size()){
        return 0;
    }
    if(j==text2.size()){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(text1[i]==text2[j]){
        return dp[i][j]=1+commonsubsequence(text1,text2,i+1,j+1,dp);
    }
    int r1=commonsubsequence(text1,text2,i+1,j,dp);
    int r2=commonsubsequence(text1,text2,i,j+1,dp);
    return dp[i][j]=max(r1,r2);
}
    int longestCommonSubsequence(string text1, string text2) {
        int a=text1.size();
        int b=text2.size();
        vector<vector<int>>dp(a);
        for(int i=0;i<a;i++){
            vector<int>t(a+b+1,-1);
            dp[i]=t;
        }
        return commonsubsequence(text1,text2,0,0,dp);
    }
};
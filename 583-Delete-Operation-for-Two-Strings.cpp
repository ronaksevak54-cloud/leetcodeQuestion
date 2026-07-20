class Solution {
public:
int common(string word1, string word2,int i,int j,vector<vector<int>>&dp){
    if(i==word1.size() || j==word2.size()){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(word1[i]==word2[j]){
        return dp[i][j]=1+common(word1,word2,i+1,j+1,dp);
    }
    int r1=common(word1,word2,i+1,j,dp);
    int r2=common(word1,word2,i,j+1,dp);
    return dp[i][j]=max(r1,r2);
}
    int minDistance(string word1, string word2) {
        int a=word1.size();
        int b=word2.size();
        vector<vector<int>>dp(a);
        for(int i=0;i<a;i++){
            vector<int>t(a+b+1,-1);
            dp[i]=t;
        }
        int d=common(word1,word2,0,0,dp);
        int e=a-d;
        int f=b-d;
        int r=e+f;
        return r;
    }
};
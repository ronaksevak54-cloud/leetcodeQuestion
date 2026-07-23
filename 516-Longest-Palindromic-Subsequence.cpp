class Solution {
public:
int common(string&s,string&d,int i,int j,vector<vector<int>>&dp){
    if(i==s.size() || j==d.size()){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(s[i]==d[j]){
        return dp[i][j]=1+common(s,d,i+1,j+1,dp);
    }
    int r1=common(s,d,i+1,j,dp);
    int r2=common(s,d,i,j+1,dp);
    return dp[i][j]=max(r1,r2);
}
    int longestPalindromeSubseq(string s) {
        string a="";
        for(char i:s){
          a=i+a;
        }
        int b=s.size();
        int c=a.size();
        vector<vector<int>>dp(b);
        for(int i=0;i<b;i++){
            vector<int>t(b+c+1,-1);
            dp[i]=t;
        }
        return common(s,a,0,0,dp);
    }
};
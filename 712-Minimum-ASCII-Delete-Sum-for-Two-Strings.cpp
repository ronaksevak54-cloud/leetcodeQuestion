class Solution {
public:
int common(string &s1, string &s2,int i,int j,vector<vector<int>>&dp){
    if(i==s1.size() || j==s2.size()){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(s1[i]==s2[j]){
        return dp[i][j]=s1[i]+common(s1,s2,i+1,j+1,dp);
    }
    int r1=common(s1,s2,i+1,j,dp);
    int r2=common(s1,s2,i,j+1,dp);
    return dp[i][j]=max(r1,r2);
}
    int minimumDeleteSum(string s1, string s2) {
        int a=s1.size();
        int b=s2.size();
        vector<vector<int>>dp(a);
        for(int i=0;i<a;i++){
            vector<int>t(a+b+1,-1);
            dp[i]=t;
        }
        int c=common(s1,s2,0,0,dp);
        int f=0;
        int g=0;
        for(int i=0;i<a;i++){
            f=f+s1[i];
        }
        for(int i=0;i<b;i++){
            g=g+s2[i];
        }
        int t=f-c;
        int s=g-c;
        int r=t+s;
        return r;
    }
};
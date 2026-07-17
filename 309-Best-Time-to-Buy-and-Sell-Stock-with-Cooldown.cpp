class Solution {
public:
int stock(vector<int>& prices,int i,int k,vector<vector<int>>&dp){
    if(i>=prices.size()){
        return 0;
    }
    if(dp[i][k]!=-1){
        return dp[i][k];
    }
    if(k==2){
        int r1=stock(prices,i+1,k-1,dp)-prices[i];
        int r2=stock(prices,i+1,k,dp);
        return dp[i][k]=max(r1,r2);
    }
    int r1=stock(prices,i+2,2,dp)+prices[i];
    int r2=stock(prices,i+1,k,dp);
    return dp[i][k]=max(r1,r2);
}
    int maxProfit(vector<int>& prices) {
        int a=prices.size();
        vector<vector<int>>dp(a);
        for(int i=0;i<a;i++){
            vector<int>t(3,-1);
            dp[i]=t;
        }
        return stock(prices,0,2,dp);
    }
};
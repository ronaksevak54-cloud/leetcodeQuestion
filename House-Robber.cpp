1class Solution {
2public:
3int house(vector<int>& nums,int i,int free,vector<vector<int>>& dp){
4    if(i==nums.size()){
5        return 0;
6    }
7    if(dp[i][free]!=-1){
8        return dp[i][free];
9    }
10    if(free==0){
11        return dp[i][free]=house(nums,i+1,1,dp);
12    }
13    int r1=nums[i]+house(nums,i+1,0,dp);
14    int r2=house(nums,i+1,1,dp);
15    return dp[i][free]=max(r1,r2);
16}
17int rob(vector<int>& nums) {
18        int a=nums.size();
19        vector<vector<int>>dp(a);
20        for(int j=0;j<a;j++){
21            vector<int>t(2,-1);
22            dp[j]=t;
23        }
24        return house(nums,0,1,dp);
25    }
26
27};
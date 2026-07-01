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
17int house2(vector<int>& nums,int i,int free,vector<vector<int>>& dp2){
18    if(i==nums.size()-1){
19        return 0;
20    }
21    if(dp2[i][free]!=-1){
22        return dp2[i][free];
23    }
24    if(free==0){
25        return dp2[i][free]=house2(nums,i+1,1,dp2);
26    }
27    int r1=nums[i]+house2(nums,i+1,0,dp2);
28    int r2=house2(nums,i+1,1,dp2);
29    return dp2[i][free]=max(r1,r2);
30}
31
32    int rob(vector<int>& nums) {
33        if(nums.size()==1){
34            return nums[0];
35        }
36        int a=nums.size();
37        vector<vector<int>>dp(a);
38        vector<vector<int>>dp2(a);
39        for(int i=0;i<a;i++){
40            vector<int>t(2,-1);
41            dp[i]=t;
42            dp2[i]=t;
43        }
44        int r=house(nums,1,1,dp);
45        int s=house2(nums,0,1,dp2);
46        return max(s,r);
47    }
48};
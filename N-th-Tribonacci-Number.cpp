1class Solution {
2public:
3 unordered_map<int,int>dp;
4    int tribonacci(int n) {
5        if(n==0){
6            return 0;
7        }
8        if(n==1){
9            return 1;
10        }
11        if(n==2){
12            return 1;
13        }
14        if(dp.find(n)!=dp.end()){
15            return dp[n];
16        }
17        int ans= tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
18        dp[n]=ans;
19        return ans;
20    }
21};
1class Solution {
2public:
3   unordered_map<int,int>r;
4    int climbStairs(int n) {
5        if(n==1){
6            return 1;
7        }
8        if(n==2){
9            return 2;
10        }
11        if(r.find(n)!=r.end()){
12            return r[n];
13        }
14        int ans=climbStairs(n-1)+climbStairs(n-2);
15        r[n]=ans;
16        return ans;
17    }
18};
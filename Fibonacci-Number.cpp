1class Solution {
2public:
3    int fib(int n) {
4        if(n==0){
5            return 0;
6        }
7        if(n==1){
8            return 1;
9        }
10        int ans=fib(n-1) + fib(n-2);
11        return ans;
12        
13    }
14};
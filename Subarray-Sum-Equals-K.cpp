1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int a=0;
5        for(int i=0;i<nums.size();i++){
6            int v=0;
7            for(int j=i;j<nums.size();j++){
8                v=v+nums[j];
9                if(v==k){
10                a++;
11            }
12            }
13        }
14        return a;
15    }
16};
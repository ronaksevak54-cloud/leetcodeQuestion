1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        vector<int>r;
5        for(int i=0;i<nums.size();i++){
6            for(int j=0;j<i;j++){
7                if(nums[i]+nums[j]==target){
8                    r.push_back(i);
9                    r.push_back(j);
10                }
11            }
12        }
13        return r;
14    }
15};
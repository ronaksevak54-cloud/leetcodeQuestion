class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>a;
        for(int i=0;i<nums.size();i++){
            int m=target-nums[i];
            if(a.find(m)!=a.end()){
                return{a[m],i};
            }
            a[nums[i]]=i;
        }
        return{-1,-1};
    }
};
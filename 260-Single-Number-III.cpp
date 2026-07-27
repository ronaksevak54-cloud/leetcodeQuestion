class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>r;
        vector<int>s;
        for(int i=0;i<nums.size();i++){
            r[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(r[nums[i]]==1){
                s.push_back(nums[i]);
            }
        }
        return s;
    }
};
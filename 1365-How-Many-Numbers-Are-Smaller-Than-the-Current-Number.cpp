class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>r;
        for(int i=0;i<nums.size();i++){
                int a=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    a++;
                }
            }
            r.push_back(a);
        }
        return r;
    }
};
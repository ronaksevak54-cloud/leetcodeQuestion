class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<int> Prefix(nums.size());
        Prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            Prefix[i] = Prefix[i - 1] + nums[i];
        }
        unordered_map<int, int> r;
        r[0]=-1;
        for (int i = 0; i < Prefix.size(); i++) {
            int m = Prefix[i] % k;
            if (r.find(m) != r.end()) {
                if (i - r[m] >= 2) {
                    return true;
                }
            }
            else{
            r[m]=i;
            }
        }
        return false;
    }
};
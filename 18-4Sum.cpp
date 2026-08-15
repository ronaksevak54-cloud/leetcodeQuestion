class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>r;
        for (long long i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (long long j = i + 1; j < nums.size();) {
                int p = j + 1;
                int s = nums.size() - 1;
                while (p < s) {
                    long long sum = (long long)nums[i]+nums[j]+nums[p]+nums[s];
                    if (sum < target) {
                        p++;
                    } else if (sum > target) {
                        s--;
                    } else {
                        r.push_back({nums[i], nums[j], nums[p], nums[s]});
                        p++;
                        s--;
                        while (p < s && nums[p] == nums[p - 1]) {
                            p++;
                        }
                    }
                }
                j++;
                while (j < nums.size() && nums[j] == nums[j - 1]) {
                    j++;
                }
            }
        }
        return r;
    }
};
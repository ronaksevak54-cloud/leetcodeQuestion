class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        int i = 0;
        int j = 0;
        int sum = 0;
        while (j < nums.size()) {
            sum = sum + nums[j];
            while (sum >= target && i < nums.size()) {
                ans = min(ans, j-i + 1);
                sum = sum - nums[i];
                i++;
            }
            if (sum < target) {
                j++;
            }
        }
        if(ans==INT_MAX){
            return 0;
        }
        return ans;
    }
};

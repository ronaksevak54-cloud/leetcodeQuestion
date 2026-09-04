class Solution {
public:
    int jump(vector<int>& nums) {
        int l = 0;
        int r = 0;
        int jumb = 0;
        while (r < nums.size() - 1) {
            int old_r=r;
            int far = 0;
            for (int i = l; i <= old_r; i++) {
                far = max(far, i + nums[i]);
            }
            r = far;
            l = old_r + 1;
            jumb = jumb + 1;
        }
        return jumb;
    }
};

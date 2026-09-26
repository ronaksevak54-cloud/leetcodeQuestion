class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> r(nums.size());
        stack<int> a;
        for (int i = 2 * nums.size() - 1; i >= 0; i--) {
            while (!a.empty() && nums[i % nums.size()] >= a.top()) {
                a.pop();
            }
            if (i < nums.size()) {
                if (a.empty()) {
                    r[i] = -1;
                } else {
                    r[i] = a.top();
                }
            }
            a.push(nums[i % nums.size()]);
        }
        return r;
    }
}; 

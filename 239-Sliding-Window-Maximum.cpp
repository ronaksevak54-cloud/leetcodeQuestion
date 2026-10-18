class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>r;
        deque<int>s;
        for (int i = 0; i < nums.size(); i++) {
            if(!s.empty() && s.front()<=i-k){
                s.pop_front();
            }
            while (!s.empty() && nums[s.back()] <= nums[i]) {
                s.pop_back();
            }
            s.push_back(i);
            if (i >= k - 1) {
                r.push_back(nums[s.front()]);
            }
        }
        return r;
    }
};
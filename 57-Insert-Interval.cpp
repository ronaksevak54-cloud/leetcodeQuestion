class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        vector<vector<int>> r;
        int i = 0;
        while (i < intervals.size() && intervals[i][1] < newInterval[0]) {
            r.push_back(intervals[i]);
            i = i + 1;
        }
        while (i < intervals.size() && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i = i + 1;
        }
        r.push_back(newInterval);
        while (i < intervals.size()) {
            r.push_back(intervals[i]);
            i = i + 1;
        }
        return r;
    }
};
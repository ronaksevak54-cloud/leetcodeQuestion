class Solution {
public:
    static bool comparator(vector<int> a, vector<int> b) { return a[0] < b[0]; }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comparator);
        vector<vector<int>> z;
        int s = intervals[0][0];
        int w = intervals[0][1];
        if (intervals.size() == 1) {
            return intervals;
        }
        for (int i = 1; i < intervals.size(); i++) {
            if (s <= intervals[i][1] && w >= intervals[i][0]) {
                s = min(s, intervals[i][0]);
                w = max(w, intervals[i][1]);
            } else {
                z.push_back({s, w});
                s = intervals[i][0];
                w = intervals[i][1];
            }
        };
        z.push_back({s, w});
        return z;
    }
};

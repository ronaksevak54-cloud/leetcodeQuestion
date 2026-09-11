class Solution {
public:
    static bool comparator(vector<int> a, vector<int> b) {
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
     }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comparator);
        int count = 1;
        int s = intervals[0][0];
        int r = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (s <= intervals[i][0] && r >= intervals[i][1]) {
                continue;
            } else {
                count++;
                s = intervals[i][0];
                r = intervals[i][1];
            }
        }
        return count;
    }
};
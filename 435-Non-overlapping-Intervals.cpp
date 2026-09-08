class Solution {
public:
    static bool comparator(vector<int> a, vector<int> b) { return a[1] < b[1]; }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comparator);
        int r=intervals[0][1];
        int count=1;
        for(int i=1;i<intervals.size();i++){
            if(r<=intervals[i][0]){
                count++;
                r=intervals[i][1];
            }
        }
        int b=intervals.size();
        int c=abs(count-b);
        return c;
    }
};
class Solution {
public:
    static bool comparator(vector<int> a, vector<int> b) { return a[1] < b[1]; }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), comparator);
    int s = points[0][1];
    int w=points[0][0];
    int count = 1;
    for (int i = 1;i < points.size();i++){
        if(w<=points[i][1] && s>=points[i][0]){
            continue;
        }
        else{
            count++;
            s=points[i][1];
            w=points[i][0];
        }
    }
    return count;
    }
};
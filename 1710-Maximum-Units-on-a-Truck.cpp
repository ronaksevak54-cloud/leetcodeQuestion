class Solution {
public:
    static bool comparator(vector<int> a, vector<int> b) {
        if(a[1]>b[1]){
            return true;
        }
        return false;
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), comparator);
        int totalsum = 0;
        for (int i = 0; i < boxTypes.size(); i++) {
            if (boxTypes[i][0] < truckSize) {
                totalsum = totalsum + (boxTypes[i][0] * boxTypes[i][1]);
                truckSize = truckSize - boxTypes[i][0];
            } else {
                totalsum = totalsum + boxTypes[i][1]* truckSize;
                break;
            }
        }
        return totalsum;
    }
};
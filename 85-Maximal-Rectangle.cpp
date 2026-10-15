class Solution {
public:
    int largestRectangleArea(vector<int> r) {
        stack<int> s;
        int MAX2 = INT_MIN;
        for (int i = 0; i < r.size(); i++) {
            while (!s.empty() && r[s.top()] > r[i]) {
                int q = s.top();
                s.pop();
                int nse = i;
                int pse;
                if (s.empty()) {
                    pse = -1;
                } else {
                    pse = s.top();
                }
                MAX2 = max(MAX2, r[q] * (nse - pse - 1));
            }
            s.push(i);
        }
        while (!s.empty()) {
            int nse2 = r.size();
            int q2 = s.top();
            s.pop();
            int pse2;
            if (s.empty()) {
                pse2 = -1;
            } else {
                pse2 = s.top();
            }
            MAX2 = max(MAX2, r[q2] * (nse2 - pse2 - 1));
        }
        return MAX2;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<vector<int>> Prefix(matrix.size(),
                                   vector<int>(matrix[0].size()));
        for(int j=0;j<matrix[0].size();j++){
            int sum=0;
            for(int i=0;i<matrix.size();i++){
                if(matrix[i][j]=='1'){
                    sum++;
                }
                else if(matrix[i][j]=='0'){
                    sum=0;
                }
                Prefix[i][j]=sum;
            }
        }
        int MAX = INT_MIN;
        for (int i = 0; i < Prefix.size(); i++) {
            MAX = max(MAX, largestRectangleArea(Prefix[i]));
        }
        return MAX;
    }
};
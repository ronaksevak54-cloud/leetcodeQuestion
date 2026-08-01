class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(int i=0;i<score.size();i++){
            for(int j=0;j<i;j++){
                if(score[i][k]>score[j][k]){
                swap(score[i],score[j]);
                }
            }
        }
        return score;
    }
}; 
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int r=0;
        int k=0;
        while(r<players.size() && k<trainers.size()){
            if(players[r]<=trainers[k]){
                r=r+1;
            }
            k=k+1;
        }
        return r;
    }
};
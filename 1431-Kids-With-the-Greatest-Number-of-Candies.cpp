class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int MAX=0;
        for(int i=0;i<candies.size();i++){
            MAX=max(MAX,candies[i]);
        }
        vector<bool>r;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=MAX){
                r.push_back(true);
            }
            else{
                r.push_back(false);
            }
        }
        return r;
    }
};
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<i;j++){
                if(heights[i]>heights[j]){
                    swap(names[i],names[j]);
                }
            }
        }
        return names;
    }
};
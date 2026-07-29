class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
       vector<int>r;
        r.push_back(pref[0]);
       for(int i=1;i<pref.size();i++){
        int c=pref[i-1]^pref[i];
        r.push_back(c);
       }
       return r;
    }
};
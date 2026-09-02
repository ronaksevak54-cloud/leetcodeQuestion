class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int r=0;
        int k=0;
        while(r<g.size() && k<s.size()){
            if(g[r]<=s[k]){
                r=r+1;
            }
            k=k+1;
        }
        return r;
    }
};
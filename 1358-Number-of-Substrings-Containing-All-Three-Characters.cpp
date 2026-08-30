class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>r;
        int j=0;
        int i=0;
        int ans=0;
        while(j<s.size()){
            r[s[j]]++;
            while(r['a']>=1 && r['b']>=1 && r['c']>=1){
                r[s[i]]--;
                i++;
            }
            ans=ans+i;
            j++;
        }
        return ans;
    }
};

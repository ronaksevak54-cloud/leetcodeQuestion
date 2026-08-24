class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=INT_MIN;
        int i=0;
        int j=0;
        unordered_map<int,int>r;
        while(j<s.size()){
            r[s[j]]++;
            while(r[s[j]]>1){
                r[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        if(ans==INT_MIN){
            return 0;
        }
        return ans;
    }
};
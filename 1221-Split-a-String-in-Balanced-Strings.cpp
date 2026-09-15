class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            int countl=0;
            int countr=0;
            for(int j=i;j<s.size();j++){
                if(s[j]=='R'){
                    countr++;
                }
                if(s[j]=='L'){
                    countl++;
                }
            }
            if(countr==countl){
                count++;
            }
        }
        return count;
    }
};
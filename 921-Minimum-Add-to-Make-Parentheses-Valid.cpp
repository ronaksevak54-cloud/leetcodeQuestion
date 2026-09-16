class Solution {
public:
    int minAddToMakeValid(string s) {
        int a=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                a=a+1;
            }
            else if(s[i]==')' && a>0){
                a=a-1;
            }
            else if(a==0){
                ans=ans+1;
            }
        }
        return ans+a;
    }
};
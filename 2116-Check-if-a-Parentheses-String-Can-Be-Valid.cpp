class Solution {
public:
    bool canBeValid(string s, string locked) {
        int balance=0;
        if(s.size()%2!=0){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(locked[i]=='0' || s[i]=='('){
                balance++;
            }
            else{
                balance--;
            }
            if(balance<0){
                return false;
            }
        }
        balance=0;
        for(int i=s.size()-1;i>=0;i--){
            if(locked[i]=='0' || s[i]==')'){
                balance++;
            }
            else{
                balance--;
            }
            if(balance<0){
                return false;
            }
        }
        return true;
    }
};
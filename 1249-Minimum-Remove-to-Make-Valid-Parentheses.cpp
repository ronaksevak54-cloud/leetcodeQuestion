class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>r;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                r.push(i);
            }
            else if(s[i]==')'){
                if(r.empty()){
                    s[i]='R';
                }
                else if(s[i]==')' && s[r.top()]=='('){
                    r.pop();
                }
            }
        }
        while(!r.empty()){
            s[r.top()]='R';
            r.pop();
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                s.erase(s.begin()+i);
                i--;
            }
        }
        return s;
    }
};
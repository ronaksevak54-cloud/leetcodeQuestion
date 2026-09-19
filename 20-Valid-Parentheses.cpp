class Solution {
public:
    bool isValid(string s) {
        stack<char> r;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                r.push(s[i]);
            } else {
                if (r.empty()) {
                    return false;
                }
                 else if (s[i] == ')' && r.top() != '(' ||
                           s[i] == '}' && r.top() != '{' ||
                           s[i] == ']' && r.top() != '[') {
                            return false;
                }
                 else if (s[i] == ')' && r.top() == '(' ||
                           s[i] == '}' && r.top() == '{' ||
                           s[i] == ']' && r.top() == '[') {
                    r.pop();
                }

            }
        }
        return r.empty();
    }
};

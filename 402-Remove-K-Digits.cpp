class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> a;
        string r = "";
        for (int i = 0; i < num.size(); i++) {
            while (!a.empty() && a.top() - '0' > num[i] - '0' && k > 0) {
                a.pop();
                k--;
            }
            a.push(num[i]);
        }
        while (k > 0) {
            a.pop();
            k--;
        }
        if (a.empty()) {
            return "0";
        }
        while (!a.empty()) {
            r.push_back(a.top());
            a.pop();
        }
        while (r.size() > 0 && r.back() == '0') {
            r.pop_back();
        }
        reverse(r.begin(), r.end());
        if (r.size() == 0) {
            return "0";
        }
        return r;
    }
};
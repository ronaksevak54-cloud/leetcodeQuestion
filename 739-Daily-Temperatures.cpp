class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>r;
        vector<int>s(temperatures.size());
        for(int i=temperatures.size()-1;i>=0;i--){
            while(!r.empty() && temperatures[i]>=temperatures[r.top()]){
                r.pop();
            }
            if(r.empty()){
                s[i]=0;
            }
            else{
                s[i]=r.top()-i;
            }
            r.push(i);
        }
        return s;
    }
};
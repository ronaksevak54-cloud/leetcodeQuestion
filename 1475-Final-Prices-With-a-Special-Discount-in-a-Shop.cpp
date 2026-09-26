class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>r(prices.size());
        stack<int>a;
        for(int i=prices.size()-1;i>=0;i--){
            while(!a.empty() && prices[i]<a.top()){
                a.pop();
            }
            if(a.empty()){
                r[i]=prices[i];
            }
            else{
                r[i]=abs(prices[i]-a.top());
            }
            a.push(prices[i]);
        }
        return r;
    }
};
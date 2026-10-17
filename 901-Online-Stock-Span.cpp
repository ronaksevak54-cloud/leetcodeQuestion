class StockSpanner {
    stack<pair<int,int>>r;
    int index=-1;
public:
    StockSpanner() {
    }
    
    int next(int price) {
        index=index+1;
        while(!r.empty()&&r.top().first<=price){
            r.pop();
        }
        int ans=0;
        if(r.empty()){
            ans=ans+(index-(-1));
        }
        else{
            ans=ans+(index-r.top().second);
        }
        r.push({price,index});
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
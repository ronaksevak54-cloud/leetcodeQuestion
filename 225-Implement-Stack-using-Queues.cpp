class MyStack {
    queue<int>r;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        int a= r.size();
        r.push(x);
        for(int i=0;i<a;i++){
            r.push(r.front());
            r.pop();
        }
    }
    
    int pop() {
        int s=r.front();
        r.pop();
        return s;
    }
    
    int top() {
        return r.front();
    }
    
    bool empty() {
        return r.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
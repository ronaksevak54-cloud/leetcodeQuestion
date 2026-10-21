class MyQueue {
    stack<int> stack1;
    stack<int> stack2;

public:
    MyQueue() {
        stack1;
        stack2;
    }

    void push(int x) { stack1.push(x); }

    int pop() {
        int a;
        if (!stack2.empty()) {
             a=stack2.top();
            stack2.pop();
        } else {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
            a=stack2.top();
            stack2.pop();
        }
        return a;
    }

    int peek() {
        if (!stack2.empty()) {
            return stack2.top();
        } else {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
            return stack2.top();
        }
    }

    bool empty() {
      return stack2.empty() && stack1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */